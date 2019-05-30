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
"depends=ipmi_msghandler";

MODULE_ALIAS("acpi*:IPI0001:*");
MODULE_ALIAS("of:N*Tipmi*Cipmi-kcs");
MODULE_ALIAS("of:N*Tipmi*Cipmi-kcsC*");
MODULE_ALIAS("of:N*Tipmi*Cipmi-smic");
MODULE_ALIAS("of:N*Tipmi*Cipmi-smicC*");
MODULE_ALIAS("of:N*Tipmi*Cipmi-bt");
MODULE_ALIAS("of:N*Tipmi*Cipmi-btC*");
MODULE_ALIAS("pci:v0000103Cd0000121Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc07i*");

MODULE_INFO(srcversion, "870A0C81950AA52F4C30FC7");
