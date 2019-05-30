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
"depends=ehci-hcd";

MODULE_ALIAS("platform:ehci-platform");
MODULE_ALIAS("acpi*:PNP0D20:*");
MODULE_ALIAS("of:N*T*Cvia,vt8500-ehci");
MODULE_ALIAS("of:N*T*Cvia,vt8500-ehciC*");
MODULE_ALIAS("of:N*T*Cwm,prizm-ehci");
MODULE_ALIAS("of:N*T*Cwm,prizm-ehciC*");
MODULE_ALIAS("of:N*T*Cgeneric-ehci");
MODULE_ALIAS("of:N*T*Cgeneric-ehciC*");
MODULE_ALIAS("of:N*T*Ccavium,octeon-6335-ehci");
MODULE_ALIAS("of:N*T*Ccavium,octeon-6335-ehciC*");

MODULE_INFO(srcversion, "6FABE8737BE129EE3EE22A5");
