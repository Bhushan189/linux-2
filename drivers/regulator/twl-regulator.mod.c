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

MODULE_ALIAS("of:N*T*Cti,twl4030-vaux1");
MODULE_ALIAS("of:N*T*Cti,twl4030-vaux1C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vaux2");
MODULE_ALIAS("of:N*T*Cti,twl4030-vaux2C*");
MODULE_ALIAS("of:N*T*Cti,twl5030-vaux2");
MODULE_ALIAS("of:N*T*Cti,twl5030-vaux2C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vaux3");
MODULE_ALIAS("of:N*T*Cti,twl4030-vaux3C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vaux4");
MODULE_ALIAS("of:N*T*Cti,twl4030-vaux4C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vmmc1");
MODULE_ALIAS("of:N*T*Cti,twl4030-vmmc1C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vmmc2");
MODULE_ALIAS("of:N*T*Cti,twl4030-vmmc2C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vpll1");
MODULE_ALIAS("of:N*T*Cti,twl4030-vpll1C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vpll2");
MODULE_ALIAS("of:N*T*Cti,twl4030-vpll2C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vsim");
MODULE_ALIAS("of:N*T*Cti,twl4030-vsimC*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vdac");
MODULE_ALIAS("of:N*T*Cti,twl4030-vdacC*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vintana2");
MODULE_ALIAS("of:N*T*Cti,twl4030-vintana2C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vio");
MODULE_ALIAS("of:N*T*Cti,twl4030-vioC*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vdd1");
MODULE_ALIAS("of:N*T*Cti,twl4030-vdd1C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vdd2");
MODULE_ALIAS("of:N*T*Cti,twl4030-vdd2C*");
MODULE_ALIAS("of:N*T*Cti,twl6030-vdd1");
MODULE_ALIAS("of:N*T*Cti,twl6030-vdd1C*");
MODULE_ALIAS("of:N*T*Cti,twl6030-vdd2");
MODULE_ALIAS("of:N*T*Cti,twl6030-vdd2C*");
MODULE_ALIAS("of:N*T*Cti,twl6030-vdd3");
MODULE_ALIAS("of:N*T*Cti,twl6030-vdd3C*");
MODULE_ALIAS("of:N*T*Cti,twl6030-vaux1");
MODULE_ALIAS("of:N*T*Cti,twl6030-vaux1C*");
MODULE_ALIAS("of:N*T*Cti,twl6030-vaux2");
MODULE_ALIAS("of:N*T*Cti,twl6030-vaux2C*");
MODULE_ALIAS("of:N*T*Cti,twl6030-vaux3");
MODULE_ALIAS("of:N*T*Cti,twl6030-vaux3C*");
MODULE_ALIAS("of:N*T*Cti,twl6030-vmmc");
MODULE_ALIAS("of:N*T*Cti,twl6030-vmmcC*");
MODULE_ALIAS("of:N*T*Cti,twl6030-vpp");
MODULE_ALIAS("of:N*T*Cti,twl6030-vppC*");
MODULE_ALIAS("of:N*T*Cti,twl6030-vusim");
MODULE_ALIAS("of:N*T*Cti,twl6030-vusimC*");
MODULE_ALIAS("of:N*T*Cti,twl6032-ldo2");
MODULE_ALIAS("of:N*T*Cti,twl6032-ldo2C*");
MODULE_ALIAS("of:N*T*Cti,twl6032-ldo4");
MODULE_ALIAS("of:N*T*Cti,twl6032-ldo4C*");
MODULE_ALIAS("of:N*T*Cti,twl6032-ldo3");
MODULE_ALIAS("of:N*T*Cti,twl6032-ldo3C*");
MODULE_ALIAS("of:N*T*Cti,twl6032-ldo5");
MODULE_ALIAS("of:N*T*Cti,twl6032-ldo5C*");
MODULE_ALIAS("of:N*T*Cti,twl6032-ldo1");
MODULE_ALIAS("of:N*T*Cti,twl6032-ldo1C*");
MODULE_ALIAS("of:N*T*Cti,twl6032-ldo7");
MODULE_ALIAS("of:N*T*Cti,twl6032-ldo7C*");
MODULE_ALIAS("of:N*T*Cti,twl6032-ldo6");
MODULE_ALIAS("of:N*T*Cti,twl6032-ldo6C*");
MODULE_ALIAS("of:N*T*Cti,twl6032-ldoln");
MODULE_ALIAS("of:N*T*Cti,twl6032-ldolnC*");
MODULE_ALIAS("of:N*T*Cti,twl6032-ldousb");
MODULE_ALIAS("of:N*T*Cti,twl6032-ldousbC*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vintana1");
MODULE_ALIAS("of:N*T*Cti,twl4030-vintana1C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vintdig");
MODULE_ALIAS("of:N*T*Cti,twl4030-vintdigC*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vusb1v5");
MODULE_ALIAS("of:N*T*Cti,twl4030-vusb1v5C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vusb1v8");
MODULE_ALIAS("of:N*T*Cti,twl4030-vusb1v8C*");
MODULE_ALIAS("of:N*T*Cti,twl4030-vusb3v1");
MODULE_ALIAS("of:N*T*Cti,twl4030-vusb3v1C*");
MODULE_ALIAS("of:N*T*Cti,twl6030-vana");
MODULE_ALIAS("of:N*T*Cti,twl6030-vanaC*");
MODULE_ALIAS("of:N*T*Cti,twl6030-vcxio");
MODULE_ALIAS("of:N*T*Cti,twl6030-vcxioC*");
MODULE_ALIAS("of:N*T*Cti,twl6030-vdac");
MODULE_ALIAS("of:N*T*Cti,twl6030-vdacC*");
MODULE_ALIAS("of:N*T*Cti,twl6030-vusb");
MODULE_ALIAS("of:N*T*Cti,twl6030-vusbC*");
MODULE_ALIAS("of:N*T*Cti,twl6030-v1v8");
MODULE_ALIAS("of:N*T*Cti,twl6030-v1v8C*");
MODULE_ALIAS("of:N*T*Cti,twl6030-v2v1");
MODULE_ALIAS("of:N*T*Cti,twl6030-v2v1C*");
MODULE_ALIAS("of:N*T*Cti,twl6032-smps3");
MODULE_ALIAS("of:N*T*Cti,twl6032-smps3C*");
MODULE_ALIAS("of:N*T*Cti,twl6032-smps4");
MODULE_ALIAS("of:N*T*Cti,twl6032-smps4C*");
MODULE_ALIAS("of:N*T*Cti,twl6032-vio");
MODULE_ALIAS("of:N*T*Cti,twl6032-vioC*");

MODULE_INFO(srcversion, "15527B0994264D8EFCA2982");
