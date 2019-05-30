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
"depends=industrialio";

MODULE_ALIAS("acpi*:MAX5487:*");
MODULE_ALIAS("acpi*:MAX5488:*");
MODULE_ALIAS("acpi*:MAX5489:*");
MODULE_ALIAS("spi:MAX5487");
MODULE_ALIAS("spi:MAX5488");
MODULE_ALIAS("spi:MAX5489");

MODULE_INFO(srcversion, "582DCF6E03B69A9E6D57F5E");
