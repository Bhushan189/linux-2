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

MODULE_ALIAS("pci:v000010B5d00009030sv000013C3sd00000101bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv000013C3sd00000100bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000013C3sd00000201bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000013C3sd00000202bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv000013C3sd00000201bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv000013C3sd00000202bc*sc*i*");

MODULE_INFO(srcversion, "478A192C1A180F5DEC27A5E");
