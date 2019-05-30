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

MODULE_ALIAS("pci:v00008086d00000817sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000818sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000819sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000082Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000082Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000082Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001195sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001196sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F43sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F46sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F47sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C61sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C7sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6408999AECBDE72845175A4");
