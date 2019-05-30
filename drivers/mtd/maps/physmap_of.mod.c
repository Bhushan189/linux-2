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
"depends=mtd,chipreg,map_funcs";

MODULE_ALIAS("of:N*T*Ccfi-flash");
MODULE_ALIAS("of:N*T*Ccfi-flashC*");
MODULE_ALIAS("of:N*T*Cjedec-flash");
MODULE_ALIAS("of:N*T*Cjedec-flashC*");
MODULE_ALIAS("of:N*T*Cmtd-ram");
MODULE_ALIAS("of:N*T*Cmtd-ramC*");
MODULE_ALIAS("of:N*T*Cmtd-rom");
MODULE_ALIAS("of:N*T*Cmtd-romC*");
MODULE_ALIAS("of:N*Trom*Cdirect-mapped");
MODULE_ALIAS("of:N*Trom*Cdirect-mappedC*");

MODULE_INFO(srcversion, "3EDFC554D26DEE3670ED20F");
