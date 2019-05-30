/*
 * Copyright (C) 2014 Sergey Senozhatsky.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */

#include <linux/kernel.h>
#include <linux/string.h>
#include <linux/err.h>
#include <linux/slab.h>
#include <linux/wait.h>
#include <linux/sched.h>
#include <linux/cpu.h>
#include <linux/crypto.h>
#include <linux/spinlock.h>

#include "zcomp.h"

static const char * const backends[] = {
	"lzo",
#if IS_ENABLED(CONFIG_CRYPTO_LZ4)
	"lz4",
#endif
#if IS_ENABLED(CONFIG_CRYPTO_DEFLATE)
	"deflate",
#endif
#if IS_ENABLED(CONFIG_CRYPTO_LZ4HC)
	"lz4hc",
#endif
#if IS_ENABLED(CONFIG_CRYPTO_842)
	"842",
#endif
	NULL
};

static DEFINE_SPINLOCK(mr_lock);
unsigned long flags;
static void zcomp_strm_free(struct zcomp_strm *zstrm)
{
	if (!IS_ERR_OR_NULL(zstrm->tfm))
		crypto_free_comp(zstrm->tfm);
	free_pages((unsigned long)zstrm->buffer, 1);
	kfree(zstrm);
}

/*
 * allocate new zcomp_strm structure with ->tfm initialized by
 * backend, return NULL on error
 */
static struct zcomp_strm *zcomp_strm_alloc(struct zcomp *comp)
{
	struct zcomp_strm *zstrm = kmalloc(sizeof(*zstrm), GFP_KERNEL);
	if (!zstrm)
		return NULL;

	zstrm->tfm = crypto_alloc_comp(comp->name, 0, 0);
	/*
	 * allocate 2 pages. 1 for compressed data, plus 1 extra for the
	 * case when compressed size is larger than the original one
	 */
	zstrm->buffer = (void *)__get_free_pages(GFP_KERNEL | __GFP_ZERO, 1);
	if (IS_ERR_OR_NULL(zstrm->tfm) || !zstrm->buffer) {
		zcomp_strm_free(zstrm);
		zstrm = NULL;
	}
	return zstrm;
}

bool zcomp_available_algorithm(const char *comp)
{
	int i = 0;

	while (backends[i]) {
		if (sysfs_streq(comp, backends[i]))
			return true;
		i++;
	}

	/*
	 * Crypto does not ignore a trailing new line symbol,
	 * so make sure you don't supply a string containing
	 * one.
	 * This also means that we permit zcomp initialisation
	 * with any compressing algorithm known to crypto api.
	 */
	return crypto_has_comp(comp, 0, 0) == 1;
}

/* show available compressors */
ssize_t zcomp_available_show(const char *comp, char *buf)
{
	bool known_algorithm = false;
	ssize_t sz = 0;
	int i = 0;

	for (; backends[i]; i++) {
		if (!strcmp(comp, backends[i])) {
			known_algorithm = true;
			sz += scnprintf(buf + sz, PAGE_SIZE - sz - 2,
					"[%s] ", backends[i]);
		} else {
			sz += scnprintf(buf + sz, PAGE_SIZE - sz - 2,
					"%s ", backends[i]);
		}
	}

	/*
	 * Out-of-tree module known to crypto api or a missing
	 * entry in `backends'.
	 */
	if (!known_algorithm && crypto_has_comp(comp, 0, 0) == 1)
		sz += scnprintf(buf + sz, PAGE_SIZE - sz - 2,
				"[%s] ", comp);

	sz += scnprintf(buf + sz, PAGE_SIZE - sz, "\n");
	return sz;
}

struct zcomp_strm *zcomp_stream_get(struct zcomp *comp)
{
	return *get_cpu_ptr(comp->stream);
}

void zcomp_stream_put(struct zcomp *comp)
{
	put_cpu_ptr(comp->stream);
}

int zcomp_compress(struct zram *zram, struct zcomp_strm *zstrm,
		const void *src, unsigned int *dst_len)
{
	/*
	 * Our dst memory (zstrm->buffer) is always `2 * PAGE_SIZE' sized
	 * because sometimes we can endup having a bigger compressed data
	 * due to various reasons: for example compression algorithms tend
	 * to add some padding to the compressed buffer. Speaking of padding,
	 * comp algorithm `842' pads the compressed length to multiple of 8
	 * and returns -ENOSP when the dst memory is not big enough, which
	 * is not something that ZRAM wants to see. We can handle the
	 * `compressed_size > PAGE_SIZE' case easily in ZRAM, but when we
	 * receive -ERRNO from the compressing backend we can't help it
	 * anymore. To make `842' happy we need to tell the exact size of
	 * the dst buffer, zram_drv will take care of the fact that
	 * compressed buffer is too big.
	 */

	//nannan
	int ret = 0;
	u64 start_cycle, end_cycle, elapse_cycle;
	*dst_len = PAGE_SIZE * 2;
	//nannan
	//spin_lock(&_ml_lock);
        spin_lock_irqsave(&mr_lock, flags);
	start_cycle = rdtsc();
	ret = crypto_comp_compress(zstrm->tfm,
			  src, PAGE_SIZE,
			zstrm->buffer, dst_len);
	end_cycle = rdtsc();
        spin_unlock_irqrestore(&mr_lock, flags);
 	//spin_unlock(&_ml_lock);
	// printk("Comp: %llu - %llu\n", start_cycle, end_cycle);
	elapse_cycle = end_cycle - start_cycle;
	atomic64_inc(&zram->stats._zram_cnt_compress);
	atomic64_add(elapse_cycle, &zram->stats._zram_compress_cycles);
	/*
	if (flag_comp == 0) {
	  atomic64_inc(&zram->stats._zram_cnt_compress);
	  atomic64_add(elapse_cycle, &zram->stats._zram_compress_cycles);
	  flag_decomp = 1;
	} else if (flag_comp == 1) {
	  atomic64_add(std::max(elapsed_cycle, glob_decompress), &zram->stats._zram_compdecomp_cycles);
	  atomic64_inc(&zram->stats._zram_count_compdecomp);
	}
	*/

    return ret;
}

int zcomp_decompress(struct zram *zram, struct zcomp_strm *zstrm,
		const void *src, unsigned int src_len, void *dst)
{
	unsigned int dst_len = PAGE_SIZE;
	int ret;
	//nannan
	u64 start_cycle, end_cycle, elapse_cycle;
	//spin_lock(&_ml_lock);
	spin_lock_irqsave(&mr_lock, flags);
	start_cycle = rdtsc();
	ret = crypto_comp_decompress(zstrm->tfm,
			src, src_len,
			dst, &dst_len);
	end_cycle = rdtsc();
        spin_unlock_irqrestore(&mr_lock, flags);
	//spin_unlock(&_ml_lock);
	//printk("Decomp: %llu - %llu\n", start_cycle, end_cycle);
	elapse_cycle = end_cycle - start_cycle;

	atomic64_inc(&zram->stats._zram_cnt_decompress);
	atomic64_add(elapse_cycle, &zram->stats._zram_decompress_cycles);
	/*
	if (flag_decomp == 0) {
	  atomic64_inc(&zram->stats._zram_cnt_decompress);
	  atomic64_add(elapse_cycle, &zram->stats._zram_decompress_cycles);
	  flag_comp = 1;
	} else if (flag_decomp == 1) {
	  
	}
	*/
	return ret;
}

static int __zcomp_cpu_notifier(struct zcomp *comp,
		unsigned long action, unsigned long cpu)
{
	struct zcomp_strm *zstrm;

	switch (action) {
	case CPU_UP_PREPARE:
		if (WARN_ON(*per_cpu_ptr(comp->stream, cpu)))
			break;
		zstrm = zcomp_strm_alloc(comp);
		if (IS_ERR_OR_NULL(zstrm)) {
			pr_err("Can't allocate a compression stream\n");
			return NOTIFY_BAD;
		}
		*per_cpu_ptr(comp->stream, cpu) = zstrm;
		break;
	case CPU_DEAD:
	case CPU_UP_CANCELED:
		zstrm = *per_cpu_ptr(comp->stream, cpu);
		if (!IS_ERR_OR_NULL(zstrm))
			zcomp_strm_free(zstrm);
		*per_cpu_ptr(comp->stream, cpu) = NULL;
		break;
	default:
		break;
	}
	return NOTIFY_OK;
}

static int zcomp_cpu_notifier(struct notifier_block *nb,
		unsigned long action, void *pcpu)
{
	unsigned long cpu = (unsigned long)pcpu;
	struct zcomp *comp = container_of(nb, typeof(*comp), notifier);

	return __zcomp_cpu_notifier(comp, action, cpu);
}

static int zcomp_init(struct zcomp *comp)
{
	unsigned long cpu;
	int ret;
	comp->notifier.notifier_call = zcomp_cpu_notifier;

	comp->stream = alloc_percpu(struct zcomp_strm *);
	if (!comp->stream)
		return -ENOMEM;

	cpu_notifier_register_begin();
	for_each_online_cpu(cpu) {
		ret = __zcomp_cpu_notifier(comp, CPU_UP_PREPARE, cpu);
		if (ret == NOTIFY_BAD)
			goto cleanup;
	}
	__register_cpu_notifier(&comp->notifier);
	cpu_notifier_register_done();
	return 0;

cleanup:
	for_each_online_cpu(cpu)
		__zcomp_cpu_notifier(comp, CPU_UP_CANCELED, cpu);
	cpu_notifier_register_done();
	return -ENOMEM;
}

void zcomp_destroy(struct zcomp *comp)
{
	unsigned long cpu;

	cpu_notifier_register_begin();
	for_each_online_cpu(cpu)
		__zcomp_cpu_notifier(comp, CPU_UP_CANCELED, cpu);
	__unregister_cpu_notifier(&comp->notifier);
	cpu_notifier_register_done();

	free_percpu(comp->stream);
	kfree(comp);
}

/*
 * search available compressors for requested algorithm.
 * allocate new zcomp and initialize it. return compressing
 * backend pointer or ERR_PTR if things went bad. ERR_PTR(-EINVAL)
 * if requested algorithm is not supported, ERR_PTR(-ENOMEM) in
 * case of allocation error, or any other error potentially
 * returned by zcomp_init().
 */
struct zcomp *zcomp_create(const char *compress)
{
	struct zcomp *comp;
	int error;

	if (!zcomp_available_algorithm(compress))
		return ERR_PTR(-EINVAL);

	comp = kzalloc(sizeof(struct zcomp), GFP_KERNEL);
	if (!comp)
		return ERR_PTR(-ENOMEM);

	comp->name = compress;
	error = zcomp_init(comp);
	if (error) {
		kfree(comp);
		return ERR_PTR(error);
	}
	return comp;
}
