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

MODULE_ALIAS("of:N*T*Catmel,at91sam9n12-hlcdc");
MODULE_ALIAS("of:N*T*Catmel,at91sam9n12-hlcdcC*");
MODULE_ALIAS("of:N*T*Catmel,at91sam9x5-hlcdc");
MODULE_ALIAS("of:N*T*Catmel,at91sam9x5-hlcdcC*");
MODULE_ALIAS("of:N*T*Catmel,sama5d2-hlcdc");
MODULE_ALIAS("of:N*T*Catmel,sama5d2-hlcdcC*");
MODULE_ALIAS("of:N*T*Catmel,sama5d3-hlcdc");
MODULE_ALIAS("of:N*T*Catmel,sama5d3-hlcdcC*");
MODULE_ALIAS("of:N*T*Catmel,sama5d4-hlcdc");
MODULE_ALIAS("of:N*T*Catmel,sama5d4-hlcdcC*");

MODULE_INFO(srcversion, "6DF59B7B89B1A75E4B87F99");
