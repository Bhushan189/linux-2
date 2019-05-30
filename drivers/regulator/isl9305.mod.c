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

MODULE_ALIAS("i2c:isl9305");
MODULE_ALIAS("i2c:isl9305h");
MODULE_ALIAS("of:N*T*Cisl,isl9305");
MODULE_ALIAS("of:N*T*Cisl,isl9305C*");
MODULE_ALIAS("of:N*T*Cisil,isl9305");
MODULE_ALIAS("of:N*T*Cisil,isl9305C*");
MODULE_ALIAS("of:N*T*Cisl,isl9305h");
MODULE_ALIAS("of:N*T*Cisl,isl9305hC*");
MODULE_ALIAS("of:N*T*Cisil,isl9305h");
MODULE_ALIAS("of:N*T*Cisil,isl9305hC*");

MODULE_INFO(srcversion, "9A987660B6F9C78BA1D2B7C");
