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
"depends=crc-itu-t";

MODULE_ALIAS("pci:v00001014d0000044Bsv00001014sd0000035Fbc12sc00i00*");
MODULE_ALIAS("pci:v00001014d0000044Bsv00000000sd00000000bc12sc00i00*");
MODULE_ALIAS("pci:v00001014d00000000sv00000000sd00000000bc12sc00i00*");
MODULE_ALIAS("pci:v00001014d0000044Bsv00000000sd0000035Fbc12sc00i00*");
MODULE_ALIAS("pci:v00001014d00000000sv00000000sd0000035Fbc12sc00i00*");
MODULE_ALIAS("pci:v00001014d0000044Bsv00001014sd0000044Bbc12sc00i00*");

MODULE_INFO(srcversion, "7080DE064820FB1538720CE");
