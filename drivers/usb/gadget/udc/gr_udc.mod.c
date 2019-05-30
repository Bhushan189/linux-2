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
"depends=udc-core";

MODULE_ALIAS("of:NGAISLER_USBDCT*");
MODULE_ALIAS("of:NGAISLER_USBDCT*C*");
MODULE_ALIAS("of:N01_021T*");
MODULE_ALIAS("of:N01_021T*C*");

MODULE_INFO(srcversion, "2F80718E1EBB201F47C4594");
