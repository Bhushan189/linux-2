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
"depends=axp20x";

MODULE_ALIAS("acpi*:INT33F4:*");
MODULE_ALIAS("of:N*T*Cx-powers,axp152");
MODULE_ALIAS("of:N*T*Cx-powers,axp152C*");
MODULE_ALIAS("of:N*T*Cx-powers,axp202");
MODULE_ALIAS("of:N*T*Cx-powers,axp202C*");
MODULE_ALIAS("of:N*T*Cx-powers,axp209");
MODULE_ALIAS("of:N*T*Cx-powers,axp209C*");
MODULE_ALIAS("of:N*T*Cx-powers,axp221");
MODULE_ALIAS("of:N*T*Cx-powers,axp221C*");

MODULE_INFO(srcversion, "1DE20E1157DCB692C7756B1");
