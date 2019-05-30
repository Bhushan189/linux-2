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
"depends=bq27xxx_battery";

MODULE_ALIAS("of:N*T*Cti,bq27200");
MODULE_ALIAS("of:N*T*Cti,bq27200C*");
MODULE_ALIAS("of:N*T*Cti,bq27210");
MODULE_ALIAS("of:N*T*Cti,bq27210C*");
MODULE_ALIAS("of:N*T*Cti,bq27500");
MODULE_ALIAS("of:N*T*Cti,bq27500C*");
MODULE_ALIAS("of:N*T*Cti,bq27510");
MODULE_ALIAS("of:N*T*Cti,bq27510C*");
MODULE_ALIAS("of:N*T*Cti,bq27520");
MODULE_ALIAS("of:N*T*Cti,bq27520C*");
MODULE_ALIAS("of:N*T*Cti,bq27530");
MODULE_ALIAS("of:N*T*Cti,bq27530C*");
MODULE_ALIAS("of:N*T*Cti,bq27531");
MODULE_ALIAS("of:N*T*Cti,bq27531C*");
MODULE_ALIAS("of:N*T*Cti,bq27541");
MODULE_ALIAS("of:N*T*Cti,bq27541C*");
MODULE_ALIAS("of:N*T*Cti,bq27542");
MODULE_ALIAS("of:N*T*Cti,bq27542C*");
MODULE_ALIAS("of:N*T*Cti,bq27546");
MODULE_ALIAS("of:N*T*Cti,bq27546C*");
MODULE_ALIAS("of:N*T*Cti,bq27742");
MODULE_ALIAS("of:N*T*Cti,bq27742C*");
MODULE_ALIAS("of:N*T*Cti,bq27545");
MODULE_ALIAS("of:N*T*Cti,bq27545C*");
MODULE_ALIAS("of:N*T*Cti,bq27421");
MODULE_ALIAS("of:N*T*Cti,bq27421C*");
MODULE_ALIAS("of:N*T*Cti,bq27425");
MODULE_ALIAS("of:N*T*Cti,bq27425C*");
MODULE_ALIAS("of:N*T*Cti,bq27441");
MODULE_ALIAS("of:N*T*Cti,bq27441C*");
MODULE_ALIAS("of:N*T*Cti,bq27621");
MODULE_ALIAS("of:N*T*Cti,bq27621C*");
MODULE_ALIAS("i2c:bq27200");
MODULE_ALIAS("i2c:bq27210");
MODULE_ALIAS("i2c:bq27500");
MODULE_ALIAS("i2c:bq27510");
MODULE_ALIAS("i2c:bq27520");
MODULE_ALIAS("i2c:bq27530");
MODULE_ALIAS("i2c:bq27531");
MODULE_ALIAS("i2c:bq27541");
MODULE_ALIAS("i2c:bq27542");
MODULE_ALIAS("i2c:bq27546");
MODULE_ALIAS("i2c:bq27742");
MODULE_ALIAS("i2c:bq27545");
MODULE_ALIAS("i2c:bq27421");
MODULE_ALIAS("i2c:bq27425");
MODULE_ALIAS("i2c:bq27441");
MODULE_ALIAS("i2c:bq27621");

MODULE_INFO(srcversion, "00C2EC156395A3010237595");
