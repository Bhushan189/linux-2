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
"depends=industrialio";

MODULE_ALIAS("i2c:ds1803-010");
MODULE_ALIAS("i2c:ds1803-050");
MODULE_ALIAS("i2c:ds1803-100");
MODULE_ALIAS("of:N*T*Cmaxim,ds1803-010");
MODULE_ALIAS("of:N*T*Cmaxim,ds1803-010C*");
MODULE_ALIAS("of:N*T*Cmaxim,ds1803-050");
MODULE_ALIAS("of:N*T*Cmaxim,ds1803-050C*");
MODULE_ALIAS("of:N*T*Cmaxim,ds1803-100");
MODULE_ALIAS("of:N*T*Cmaxim,ds1803-100C*");

MODULE_INFO(srcversion, "AF1B8CD769F6126656EB341");