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
"depends=udc-core,ulpi";

MODULE_ALIAS("of:N*T*Csnps,dwc3");
MODULE_ALIAS("of:N*T*Csnps,dwc3C*");
MODULE_ALIAS("of:N*T*Csynopsys,dwc3");
MODULE_ALIAS("of:N*T*Csynopsys,dwc3C*");
MODULE_ALIAS("acpi*:808622B7:*");

MODULE_INFO(srcversion, "8057F7CFE89094C002DA4EF");
