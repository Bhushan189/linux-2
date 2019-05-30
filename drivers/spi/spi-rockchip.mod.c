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

MODULE_ALIAS("of:N*T*Crockchip,rk3036-spi");
MODULE_ALIAS("of:N*T*Crockchip,rk3036-spiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3066-spi");
MODULE_ALIAS("of:N*T*Crockchip,rk3066-spiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3188-spi");
MODULE_ALIAS("of:N*T*Crockchip,rk3188-spiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3228-spi");
MODULE_ALIAS("of:N*T*Crockchip,rk3228-spiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3288-spi");
MODULE_ALIAS("of:N*T*Crockchip,rk3288-spiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3368-spi");
MODULE_ALIAS("of:N*T*Crockchip,rk3368-spiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-spi");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-spiC*");

MODULE_INFO(srcversion, "95F16A7E66541F14606E564");
