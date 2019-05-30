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

MODULE_ALIAS("i2c:tlc59116");
MODULE_ALIAS("i2c:tlc59108");
MODULE_ALIAS("of:N*T*Cti,tlc59116");
MODULE_ALIAS("of:N*T*Cti,tlc59116C*");
MODULE_ALIAS("of:N*T*Cti,tlc59108");
MODULE_ALIAS("of:N*T*Cti,tlc59108C*");

MODULE_INFO(srcversion, "570E1A694A58C8FD8DA5D03");
