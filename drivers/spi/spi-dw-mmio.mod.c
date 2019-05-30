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
"depends=spi-dw";

MODULE_ALIAS("of:N*T*Csnps,dw-apb-ssi");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-ssiC*");

MODULE_INFO(srcversion, "E1CE450A0FC7A1977107FFE");
