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
"depends=xhci-hcd";

MODULE_ALIAS("acpi*:PNP0D10:*");
MODULE_ALIAS("of:N*T*Cgeneric-xhci");
MODULE_ALIAS("of:N*T*Cgeneric-xhciC*");
MODULE_ALIAS("of:N*T*Cxhci-platform");
MODULE_ALIAS("of:N*T*Cxhci-platformC*");
MODULE_ALIAS("of:N*T*Cmarvell,armada-375-xhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada-375-xhciC*");
MODULE_ALIAS("of:N*T*Cmarvell,armada-380-xhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada-380-xhciC*");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7790");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7790C*");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7791");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7791C*");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7793");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7793C*");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7795");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7795C*");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen2-xhci");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen2-xhciC*");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen3-xhci");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen3-xhciC*");

MODULE_INFO(srcversion, "D83A6A312AAE9B5FDC62807");
