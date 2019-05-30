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

MODULE_ALIAS("of:N*T*Cmaxim,max7319");
MODULE_ALIAS("of:N*T*Cmaxim,max7319C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7320");
MODULE_ALIAS("of:N*T*Cmaxim,max7320C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7321");
MODULE_ALIAS("of:N*T*Cmaxim,max7321C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7322");
MODULE_ALIAS("of:N*T*Cmaxim,max7322C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7323");
MODULE_ALIAS("of:N*T*Cmaxim,max7323C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7324");
MODULE_ALIAS("of:N*T*Cmaxim,max7324C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7325");
MODULE_ALIAS("of:N*T*Cmaxim,max7325C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7326");
MODULE_ALIAS("of:N*T*Cmaxim,max7326C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7327");
MODULE_ALIAS("of:N*T*Cmaxim,max7327C*");
MODULE_ALIAS("i2c:max7319");
MODULE_ALIAS("i2c:max7320");
MODULE_ALIAS("i2c:max7321");
MODULE_ALIAS("i2c:max7322");
MODULE_ALIAS("i2c:max7323");
MODULE_ALIAS("i2c:max7324");
MODULE_ALIAS("i2c:max7325");
MODULE_ALIAS("i2c:max7326");
MODULE_ALIAS("i2c:max7327");

MODULE_INFO(srcversion, "89E737D6E8798C00775D5DE");
