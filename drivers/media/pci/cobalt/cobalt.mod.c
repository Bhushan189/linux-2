#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,snd-pcm,videobuf2-core,v4l2-dv-timings,chipreg,snd,mtd,v4l2-common,videobuf2-dma-sg";

MODULE_ALIAS("pci:v00001137d00002732sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9B3DF0FFAAF451A59E0C39E");
