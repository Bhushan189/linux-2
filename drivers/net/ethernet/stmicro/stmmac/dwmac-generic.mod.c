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
"depends=stmmac-platform,stmmac";

MODULE_ALIAS("of:N*T*Cst,spear600-gmac");
MODULE_ALIAS("of:N*T*Cst,spear600-gmacC*");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.610");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.610C*");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.70a");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.70aC*");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.710");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.710C*");
MODULE_ALIAS("of:N*T*Csnps,dwmac");
MODULE_ALIAS("of:N*T*Csnps,dwmacC*");

MODULE_INFO(srcversion, "C6F2FEF337A394263D8B419");
