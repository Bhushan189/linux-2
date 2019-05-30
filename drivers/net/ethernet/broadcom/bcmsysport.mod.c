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
"depends=libphy,of_mdio";

MODULE_ALIAS("of:N*T*Cbrcm,systemport-v1.00");
MODULE_ALIAS("of:N*T*Cbrcm,systemport-v1.00C*");
MODULE_ALIAS("of:N*T*Cbrcm,systemport");
MODULE_ALIAS("of:N*T*Cbrcm,systemportC*");

MODULE_INFO(srcversion, "71D63B9544B43D8E471EF6A");
