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
"depends=industrialio,industrialio-triggered-buffer";

MODULE_ALIAS("acpi*:ADC081C:*");
MODULE_ALIAS("acpi*:ADC101C:*");
MODULE_ALIAS("acpi*:ADC121C:*");
MODULE_ALIAS("of:N*T*Cti,adc081c");
MODULE_ALIAS("of:N*T*Cti,adc081cC*");
MODULE_ALIAS("of:N*T*Cti,adc101c");
MODULE_ALIAS("of:N*T*Cti,adc101cC*");
MODULE_ALIAS("of:N*T*Cti,adc121c");
MODULE_ALIAS("of:N*T*Cti,adc121cC*");
MODULE_ALIAS("i2c:adc081c");
MODULE_ALIAS("i2c:adc101c");
MODULE_ALIAS("i2c:adc121c");

MODULE_INFO(srcversion, "C82C44BCB78C5123F279E0E");
