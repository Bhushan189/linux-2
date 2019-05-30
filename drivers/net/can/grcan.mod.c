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
"depends=can-dev";

MODULE_ALIAS("of:NGAISLER_GRCANT*");
MODULE_ALIAS("of:NGAISLER_GRCANT*C*");
MODULE_ALIAS("of:N01_03dT*");
MODULE_ALIAS("of:N01_03dT*C*");
MODULE_ALIAS("of:NGAISLER_GRHCANT*");
MODULE_ALIAS("of:NGAISLER_GRHCANT*C*");
MODULE_ALIAS("of:N01_034T*");
MODULE_ALIAS("of:N01_034T*C*");

MODULE_INFO(srcversion, "2A925309008D2B6B63607BA");
