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
"depends=ms5611_core,industrialio";

MODULE_ALIAS("spi:ms5611");
MODULE_ALIAS("spi:ms5607");
MODULE_ALIAS("of:N*T*Cmeas,ms5611");
MODULE_ALIAS("of:N*T*Cmeas,ms5611C*");
MODULE_ALIAS("of:N*T*Cms5611");
MODULE_ALIAS("of:N*T*Cms5611C*");
MODULE_ALIAS("of:N*T*Cmeas,ms5607");
MODULE_ALIAS("of:N*T*Cmeas,ms5607C*");
MODULE_ALIAS("of:N*T*Cms5607");
MODULE_ALIAS("of:N*T*Cms5607C*");

MODULE_INFO(srcversion, "0E3FDFD4FFE52C63B95A5F8");
