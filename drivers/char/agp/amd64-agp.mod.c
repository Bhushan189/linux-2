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
"depends=agpgart";

MODULE_ALIAS("pci:v00001022d00007454sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v000010B9d00001689sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000282sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003188sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000204sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000336sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000238sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d0000B188sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v000010DEd000000D1sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v000010DEd000000E1sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000755sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000760sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v000010B9d00001695sv*sd*bc06sc00i00*");

MODULE_INFO(srcversion, "ECB1123F67913F8EAAB9A7D");
