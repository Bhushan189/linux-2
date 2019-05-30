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
"depends=spi-bitbang";

MODULE_ALIAS("of:N*T*Cxlnx,xps-spi-2.00.a");
MODULE_ALIAS("of:N*T*Cxlnx,xps-spi-2.00.aC*");
MODULE_ALIAS("of:N*T*Cxlnx,xps-spi-2.00.b");
MODULE_ALIAS("of:N*T*Cxlnx,xps-spi-2.00.bC*");

MODULE_INFO(srcversion, "B3B55CA45A18C591A7D7D8E");
