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
"depends=st_pressure,st_sensors_i2c,industrialio";

MODULE_ALIAS("i2c:lps001wp");
MODULE_ALIAS("i2c:lps25h");
MODULE_ALIAS("i2c:lps331ap");
MODULE_ALIAS("of:N*T*Cst,lps001wp-press");
MODULE_ALIAS("of:N*T*Cst,lps001wp-pressC*");
MODULE_ALIAS("of:N*T*Cst,lps25h-press");
MODULE_ALIAS("of:N*T*Cst,lps25h-pressC*");
MODULE_ALIAS("of:N*T*Cst,lps331ap-press");
MODULE_ALIAS("of:N*T*Cst,lps331ap-pressC*");
MODULE_ALIAS("of:N*T*Cst,lps22hb-press");
MODULE_ALIAS("of:N*T*Cst,lps22hb-pressC*");

MODULE_INFO(srcversion, "9C2CC44C4D44FE4929B2C62");
