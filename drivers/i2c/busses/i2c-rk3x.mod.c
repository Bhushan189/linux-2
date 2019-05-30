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

MODULE_ALIAS("of:N*T*Crockchip,rk3066-i2c");
MODULE_ALIAS("of:N*T*Crockchip,rk3066-i2cC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3188-i2c");
MODULE_ALIAS("of:N*T*Crockchip,rk3188-i2cC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3228-i2c");
MODULE_ALIAS("of:N*T*Crockchip,rk3228-i2cC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3288-i2c");
MODULE_ALIAS("of:N*T*Crockchip,rk3288-i2cC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-i2c");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-i2cC*");

MODULE_INFO(srcversion, "4FCC3E2347C9F63A90F4390");
