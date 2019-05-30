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
"depends=tps65218";

MODULE_ALIAS("platform:tps65218-gpio");
MODULE_ALIAS("of:N*T*Cti,tps65218-gpio");
MODULE_ALIAS("of:N*T*Cti,tps65218-gpioC*");

MODULE_INFO(srcversion, "2A7F8B1B33F4A4007440EFF");
