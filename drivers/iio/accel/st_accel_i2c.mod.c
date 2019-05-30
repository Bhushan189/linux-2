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
"depends=st_accel,st_sensors_i2c,industrialio";

MODULE_ALIAS("i2c:lsm303dlh_accel");
MODULE_ALIAS("i2c:lsm303dlhc_accel");
MODULE_ALIAS("i2c:lis3dh");
MODULE_ALIAS("i2c:lsm330d_accel");
MODULE_ALIAS("i2c:lsm330dl_accel");
MODULE_ALIAS("i2c:lsm330dlc_accel");
MODULE_ALIAS("i2c:lis331dlh");
MODULE_ALIAS("i2c:lsm303dl_accel");
MODULE_ALIAS("i2c:lsm303dlm_accel");
MODULE_ALIAS("i2c:lsm330_accel");
MODULE_ALIAS("i2c:lsm303agr_accel");
MODULE_ALIAS("i2c:lis2dh12_accel");
MODULE_ALIAS("i2c:lis3l02dq");
MODULE_ALIAS("of:N*T*Cst,lis3lv02dl-accel");
MODULE_ALIAS("of:N*T*Cst,lis3lv02dl-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm303dlh-accel");
MODULE_ALIAS("of:N*T*Cst,lsm303dlh-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm303dlhc-accel");
MODULE_ALIAS("of:N*T*Cst,lsm303dlhc-accelC*");
MODULE_ALIAS("of:N*T*Cst,lis3dh-accel");
MODULE_ALIAS("of:N*T*Cst,lis3dh-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm330d-accel");
MODULE_ALIAS("of:N*T*Cst,lsm330d-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm330dl-accel");
MODULE_ALIAS("of:N*T*Cst,lsm330dl-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm330dlc-accel");
MODULE_ALIAS("of:N*T*Cst,lsm330dlc-accelC*");
MODULE_ALIAS("of:N*T*Cst,lis331dl-accel");
MODULE_ALIAS("of:N*T*Cst,lis331dl-accelC*");
MODULE_ALIAS("of:N*T*Cst,lis331dlh-accel");
MODULE_ALIAS("of:N*T*Cst,lis331dlh-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm303dl-accel");
MODULE_ALIAS("of:N*T*Cst,lsm303dl-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm303dlm-accel");
MODULE_ALIAS("of:N*T*Cst,lsm303dlm-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm330-accel");
MODULE_ALIAS("of:N*T*Cst,lsm330-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm303agr-accel");
MODULE_ALIAS("of:N*T*Cst,lsm303agr-accelC*");
MODULE_ALIAS("of:N*T*Cst,lis2dh12-accel");
MODULE_ALIAS("of:N*T*Cst,lis2dh12-accelC*");
MODULE_ALIAS("of:N*T*Cst,h3lis331dl-accel");
MODULE_ALIAS("of:N*T*Cst,h3lis331dl-accelC*");
MODULE_ALIAS("of:N*T*Cst,lis3l02dq");
MODULE_ALIAS("of:N*T*Cst,lis3l02dqC*");

MODULE_INFO(srcversion, "224F078919AD682244B27D3");
