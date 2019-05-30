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
"depends=tps65218";

MODULE_ALIAS("of:N*T*Cti,tps65218-dcdc1");
MODULE_ALIAS("of:N*T*Cti,tps65218-dcdc1C*");
MODULE_ALIAS("of:N*T*Cti,tps65218-dcdc2");
MODULE_ALIAS("of:N*T*Cti,tps65218-dcdc2C*");
MODULE_ALIAS("of:N*T*Cti,tps65218-dcdc3");
MODULE_ALIAS("of:N*T*Cti,tps65218-dcdc3C*");
MODULE_ALIAS("of:N*T*Cti,tps65218-dcdc4");
MODULE_ALIAS("of:N*T*Cti,tps65218-dcdc4C*");
MODULE_ALIAS("of:N*T*Cti,tps65218-dcdc5");
MODULE_ALIAS("of:N*T*Cti,tps65218-dcdc5C*");
MODULE_ALIAS("of:N*T*Cti,tps65218-dcdc6");
MODULE_ALIAS("of:N*T*Cti,tps65218-dcdc6C*");
MODULE_ALIAS("of:N*T*Cti,tps65218-ldo1");
MODULE_ALIAS("of:N*T*Cti,tps65218-ldo1C*");
MODULE_ALIAS("of:N*T*Cti,tps65218-ls3");
MODULE_ALIAS("of:N*T*Cti,tps65218-ls3C*");

MODULE_INFO(srcversion, "9383208FBB04CE7AAAF6533");
