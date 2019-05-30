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

MODULE_ALIAS("acpi*:HISI0181:*");
MODULE_ALIAS("acpi*:APMC0D07:*");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-gpio");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-gpioC*");

MODULE_INFO(srcversion, "C11C1B4ACC2F423F087C8A7");
