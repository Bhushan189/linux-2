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
"depends=v4l2-flash-led-class,led-class-flash";

MODULE_ALIAS("of:N*T*Cskyworks,aat1290");
MODULE_ALIAS("of:N*T*Cskyworks,aat1290C*");

MODULE_INFO(srcversion, "CE8879CA2F7844D8AA03371");
