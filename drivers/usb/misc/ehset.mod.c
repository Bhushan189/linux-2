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

MODULE_ALIAS("usb:v1A0Ap0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A0Ap0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A0Ap0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A0Ap0104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A0Ap0106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A0Ap0107d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A0Ap0108d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "445CA2769BC45032423C435");
