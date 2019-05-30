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
"depends=stmmac";

MODULE_ALIAS("pci:v00000700d00001108sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Ad0000CC09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000937sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "21D7C7E4086FC9D40860AA4");
