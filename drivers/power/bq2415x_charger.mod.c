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

MODULE_ALIAS("of:N*T*Cti,bq24150");
MODULE_ALIAS("of:N*T*Cti,bq24150C*");
MODULE_ALIAS("of:N*T*Cti,bq24150a");
MODULE_ALIAS("of:N*T*Cti,bq24150aC*");
MODULE_ALIAS("of:N*T*Cti,bq24151");
MODULE_ALIAS("of:N*T*Cti,bq24151C*");
MODULE_ALIAS("of:N*T*Cti,bq24151a");
MODULE_ALIAS("of:N*T*Cti,bq24151aC*");
MODULE_ALIAS("of:N*T*Cti,bq24152");
MODULE_ALIAS("of:N*T*Cti,bq24152C*");
MODULE_ALIAS("of:N*T*Cti,bq24153");
MODULE_ALIAS("of:N*T*Cti,bq24153C*");
MODULE_ALIAS("of:N*T*Cti,bq24153a");
MODULE_ALIAS("of:N*T*Cti,bq24153aC*");
MODULE_ALIAS("of:N*T*Cti,bq24155");
MODULE_ALIAS("of:N*T*Cti,bq24155C*");
MODULE_ALIAS("of:N*T*Cti,bq24156");
MODULE_ALIAS("of:N*T*Cti,bq24156C*");
MODULE_ALIAS("of:N*T*Cti,bq24156a");
MODULE_ALIAS("of:N*T*Cti,bq24156aC*");
MODULE_ALIAS("of:N*T*Cti,bq24157s");
MODULE_ALIAS("of:N*T*Cti,bq24157sC*");
MODULE_ALIAS("of:N*T*Cti,bq24158");
MODULE_ALIAS("of:N*T*Cti,bq24158C*");
MODULE_ALIAS("acpi*:BQ2415X:*");
MODULE_ALIAS("acpi*:BQ241500:*");
MODULE_ALIAS("acpi*:BQA24150:*");
MODULE_ALIAS("acpi*:BQ241510:*");
MODULE_ALIAS("acpi*:BQA24151:*");
MODULE_ALIAS("acpi*:BQ241520:*");
MODULE_ALIAS("acpi*:BQ241530:*");
MODULE_ALIAS("acpi*:BQA24153:*");
MODULE_ALIAS("acpi*:BQ241550:*");
MODULE_ALIAS("acpi*:BQ241560:*");
MODULE_ALIAS("acpi*:BQA24156:*");
MODULE_ALIAS("acpi*:BQS24157:*");
MODULE_ALIAS("acpi*:BQ241580:*");
MODULE_ALIAS("i2c:bq2415x");
MODULE_ALIAS("i2c:bq24150");
MODULE_ALIAS("i2c:bq24150a");
MODULE_ALIAS("i2c:bq24151");
MODULE_ALIAS("i2c:bq24151a");
MODULE_ALIAS("i2c:bq24152");
MODULE_ALIAS("i2c:bq24153");
MODULE_ALIAS("i2c:bq24153a");
MODULE_ALIAS("i2c:bq24155");
MODULE_ALIAS("i2c:bq24156");
MODULE_ALIAS("i2c:bq24156a");
MODULE_ALIAS("i2c:bq24157s");
MODULE_ALIAS("i2c:bq24158");

MODULE_INFO(srcversion, "8504298282B7E9A848615E5");
