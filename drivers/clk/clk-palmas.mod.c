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

MODULE_ALIAS("of:N*T*Cti,palmas-clk32kg");
MODULE_ALIAS("of:N*T*Cti,palmas-clk32kgC*");
MODULE_ALIAS("of:N*T*Cti,palmas-clk32kgaudio");
MODULE_ALIAS("of:N*T*Cti,palmas-clk32kgaudioC*");

MODULE_INFO(srcversion, "A922C12DA6B400614C51F35");
