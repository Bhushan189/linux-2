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
"depends=st_magn,st_sensors_i2c,industrialio";

MODULE_ALIAS("i2c:lsm303dlh_magn");
MODULE_ALIAS("i2c:lsm303dlhc_magn");
MODULE_ALIAS("i2c:lsm303dlm_magn");
MODULE_ALIAS("i2c:lis3mdl");
MODULE_ALIAS("i2c:lsm303agr_magn");
MODULE_ALIAS("of:N*T*Cst,lsm303dlh-magn");
MODULE_ALIAS("of:N*T*Cst,lsm303dlh-magnC*");
MODULE_ALIAS("of:N*T*Cst,lsm303dlhc-magn");
MODULE_ALIAS("of:N*T*Cst,lsm303dlhc-magnC*");
MODULE_ALIAS("of:N*T*Cst,lsm303dlm-magn");
MODULE_ALIAS("of:N*T*Cst,lsm303dlm-magnC*");
MODULE_ALIAS("of:N*T*Cst,lis3mdl-magn");
MODULE_ALIAS("of:N*T*Cst,lis3mdl-magnC*");
MODULE_ALIAS("of:N*T*Cst,lsm303agr-magn");
MODULE_ALIAS("of:N*T*Cst,lsm303agr-magnC*");

MODULE_INFO(srcversion, "9553F39C239593C8F6C7283");
