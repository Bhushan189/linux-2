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

MODULE_ALIAS("spi:max3107");
MODULE_ALIAS("spi:max3108");
MODULE_ALIAS("spi:max3109");
MODULE_ALIAS("spi:max14830");
MODULE_ALIAS("of:N*T*Cmaxim,max3107");
MODULE_ALIAS("of:N*T*Cmaxim,max3107C*");
MODULE_ALIAS("of:N*T*Cmaxim,max3108");
MODULE_ALIAS("of:N*T*Cmaxim,max3108C*");
MODULE_ALIAS("of:N*T*Cmaxim,max3109");
MODULE_ALIAS("of:N*T*Cmaxim,max3109C*");
MODULE_ALIAS("of:N*T*Cmaxim,max14830");
MODULE_ALIAS("of:N*T*Cmaxim,max14830C*");

MODULE_INFO(srcversion, "78D05D201A29452F5D5FDAA");
