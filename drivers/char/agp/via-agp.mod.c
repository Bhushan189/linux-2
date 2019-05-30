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

MODULE_ALIAS("pci:v00001106d00000597sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000598sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000501sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000601sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000691sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000391sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003091sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003156sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003112sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000305sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003128sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003099sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003101sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003116sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003123sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003189sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000605sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003148sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003168sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000198sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003205sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000258sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000308sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003208sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000259sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000269sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d0000B198sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000296sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000314sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000324sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000327sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000364sv*sd*bc06sc00i00*");

MODULE_INFO(srcversion, "B8694D0807629012489F1ED");
