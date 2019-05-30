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
"depends=ff-memless";

MODULE_ALIAS("of:N*T*Cti,drv2604");
MODULE_ALIAS("of:N*T*Cti,drv2604C*");
MODULE_ALIAS("of:N*T*Cti,drv2604l");
MODULE_ALIAS("of:N*T*Cti,drv2604lC*");
MODULE_ALIAS("of:N*T*Cti,drv2605");
MODULE_ALIAS("of:N*T*Cti,drv2605C*");
MODULE_ALIAS("of:N*T*Cti,drv2605l");
MODULE_ALIAS("of:N*T*Cti,drv2605lC*");
MODULE_ALIAS("i2c:drv2605l");

MODULE_INFO(srcversion, "AD9B2CEF5E0D655ABC2D3E0");
