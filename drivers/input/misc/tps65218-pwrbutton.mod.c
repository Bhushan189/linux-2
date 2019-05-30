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

MODULE_ALIAS("of:N*T*Cti,tps65218-pwrbutton");
MODULE_ALIAS("of:N*T*Cti,tps65218-pwrbuttonC*");

MODULE_INFO(srcversion, "C152AD8B5046C7715C1B3B1");
