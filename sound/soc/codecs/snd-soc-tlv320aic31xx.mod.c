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
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("i2c:tlv320aic310x");
MODULE_ALIAS("i2c:tlv320aic311x");
MODULE_ALIAS("i2c:tlv320aic3100");
MODULE_ALIAS("i2c:tlv320aic3110");
MODULE_ALIAS("i2c:tlv320aic3120");
MODULE_ALIAS("i2c:tlv320aic3111");
MODULE_ALIAS("of:N*T*Cti,tlv320aic310x");
MODULE_ALIAS("of:N*T*Cti,tlv320aic310xC*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic311x");
MODULE_ALIAS("of:N*T*Cti,tlv320aic311xC*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3100");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3100C*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3110");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3110C*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3120");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3120C*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3111");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3111C*");
MODULE_ALIAS("acpi*:10TI3100:*");

MODULE_INFO(srcversion, "F8FD9811FB11C0901E8DC67");
