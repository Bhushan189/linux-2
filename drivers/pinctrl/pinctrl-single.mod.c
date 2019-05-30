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
"depends=";

MODULE_ALIAS("of:N*T*Cti,omap3-padconf");
MODULE_ALIAS("of:N*T*Cti,omap3-padconfC*");
MODULE_ALIAS("of:N*T*Cti,omap4-padconf");
MODULE_ALIAS("of:N*T*Cti,omap4-padconfC*");
MODULE_ALIAS("of:N*T*Cti,omap5-padconf");
MODULE_ALIAS("of:N*T*Cti,omap5-padconfC*");
MODULE_ALIAS("of:N*T*Cti,dra7-padconf");
MODULE_ALIAS("of:N*T*Cti,dra7-padconfC*");
MODULE_ALIAS("of:N*T*Cti,am437-padconf");
MODULE_ALIAS("of:N*T*Cti,am437-padconfC*");
MODULE_ALIAS("of:N*T*Cpinctrl-single");
MODULE_ALIAS("of:N*T*Cpinctrl-singleC*");
MODULE_ALIAS("of:N*T*Cpinconf-single");
MODULE_ALIAS("of:N*T*Cpinconf-singleC*");

MODULE_INFO(srcversion, "851FCDFCD56C0D87391104D");
