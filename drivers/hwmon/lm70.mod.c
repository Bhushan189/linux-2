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

MODULE_ALIAS("spi:lm70");
MODULE_ALIAS("spi:tmp121");
MODULE_ALIAS("spi:lm71");
MODULE_ALIAS("spi:lm74");
MODULE_ALIAS("of:N*T*Cti,lm70");
MODULE_ALIAS("of:N*T*Cti,lm70C*");
MODULE_ALIAS("of:N*T*Cti,tmp121");
MODULE_ALIAS("of:N*T*Cti,tmp121C*");
MODULE_ALIAS("of:N*T*Cti,lm71");
MODULE_ALIAS("of:N*T*Cti,lm71C*");
MODULE_ALIAS("of:N*T*Cti,lm74");
MODULE_ALIAS("of:N*T*Cti,lm74C*");

MODULE_INFO(srcversion, "12B6C5E4570C5446E9C423A");
