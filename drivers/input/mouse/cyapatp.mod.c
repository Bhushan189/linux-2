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

MODULE_ALIAS("of:N*T*Ccypress,cyapa");
MODULE_ALIAS("of:N*T*Ccypress,cyapaC*");
MODULE_ALIAS("acpi*:CYAP0000:*");
MODULE_ALIAS("acpi*:CYAP0001:*");
MODULE_ALIAS("acpi*:CYAP0002:*");
MODULE_ALIAS("i2c:cyapa");

MODULE_INFO(srcversion, "40BF4C8DC4C27E521EC22C6");
