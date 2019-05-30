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
"depends=pmbus_core";

MODULE_ALIAS("of:N*T*Clltc,ltc2974");
MODULE_ALIAS("of:N*T*Clltc,ltc2974C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2975");
MODULE_ALIAS("of:N*T*Clltc,ltc2975C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2977");
MODULE_ALIAS("of:N*T*Clltc,ltc2977C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2978");
MODULE_ALIAS("of:N*T*Clltc,ltc2978C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2980");
MODULE_ALIAS("of:N*T*Clltc,ltc2980C*");
MODULE_ALIAS("of:N*T*Clltc,ltc3880");
MODULE_ALIAS("of:N*T*Clltc,ltc3880C*");
MODULE_ALIAS("of:N*T*Clltc,ltc3882");
MODULE_ALIAS("of:N*T*Clltc,ltc3882C*");
MODULE_ALIAS("of:N*T*Clltc,ltc3883");
MODULE_ALIAS("of:N*T*Clltc,ltc3883C*");
MODULE_ALIAS("of:N*T*Clltc,ltc3886");
MODULE_ALIAS("of:N*T*Clltc,ltc3886C*");
MODULE_ALIAS("of:N*T*Clltc,ltc3887");
MODULE_ALIAS("of:N*T*Clltc,ltc3887C*");
MODULE_ALIAS("of:N*T*Clltc,ltm2987");
MODULE_ALIAS("of:N*T*Clltc,ltm2987C*");
MODULE_ALIAS("of:N*T*Clltc,ltm4675");
MODULE_ALIAS("of:N*T*Clltc,ltm4675C*");
MODULE_ALIAS("of:N*T*Clltc,ltm4676");
MODULE_ALIAS("of:N*T*Clltc,ltm4676C*");
MODULE_ALIAS("i2c:ltc2974");
MODULE_ALIAS("i2c:ltc2975");
MODULE_ALIAS("i2c:ltc2977");
MODULE_ALIAS("i2c:ltc2978");
MODULE_ALIAS("i2c:ltc2980");
MODULE_ALIAS("i2c:ltc3880");
MODULE_ALIAS("i2c:ltc3882");
MODULE_ALIAS("i2c:ltc3883");
MODULE_ALIAS("i2c:ltc3886");
MODULE_ALIAS("i2c:ltc3887");
MODULE_ALIAS("i2c:ltm2987");
MODULE_ALIAS("i2c:ltm4675");
MODULE_ALIAS("i2c:ltm4676");

MODULE_INFO(srcversion, "9F68E116C1380F5C9DB690A");
