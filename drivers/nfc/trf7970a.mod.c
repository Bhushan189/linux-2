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
"depends=nfc_digital,nfc";

MODULE_ALIAS("spi:trf7970a");
MODULE_ALIAS("of:N*T*Cti,trf7970a");
MODULE_ALIAS("of:N*T*Cti,trf7970aC*");

MODULE_INFO(srcversion, "3F6A3673E48F28A86676C9D");