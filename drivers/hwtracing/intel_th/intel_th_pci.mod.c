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
"depends=intel_th";

MODULE_ALIAS("pci:v00008086d00009D26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A126sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A8Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A8Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2A6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4B46665F914ABA423526F89");
