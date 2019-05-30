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
"depends=spi-fsl-lib";

MODULE_ALIAS("of:N*T*Cfsl,spi");
MODULE_ALIAS("of:N*T*Cfsl,spiC*");
MODULE_ALIAS("of:N*T*Caeroflexgaisler,spictrl");
MODULE_ALIAS("of:N*T*Caeroflexgaisler,spictrlC*");

MODULE_INFO(srcversion, "C77EF4B07AFA4A814A7C96B");
