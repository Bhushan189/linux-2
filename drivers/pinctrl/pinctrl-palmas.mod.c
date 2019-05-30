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

MODULE_ALIAS("of:N*T*Cti,palmas-pinctrl");
MODULE_ALIAS("of:N*T*Cti,palmas-pinctrlC*");
MODULE_ALIAS("of:N*T*Cti,tps65913-pinctrl");
MODULE_ALIAS("of:N*T*Cti,tps65913-pinctrlC*");
MODULE_ALIAS("of:N*T*Cti,tps80036-pinctrl");
MODULE_ALIAS("of:N*T*Cti,tps80036-pinctrlC*");

MODULE_INFO(srcversion, "E46AD1F70E9D72D1F729B14");
