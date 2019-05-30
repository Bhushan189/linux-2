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
"depends=industrialio,industrialio-triggered-buffer";

MODULE_ALIAS("of:N*T*Cmaxim,max1027");
MODULE_ALIAS("of:N*T*Cmaxim,max1027C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1029");
MODULE_ALIAS("of:N*T*Cmaxim,max1029C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1031");
MODULE_ALIAS("of:N*T*Cmaxim,max1031C*");
MODULE_ALIAS("spi:max1027");
MODULE_ALIAS("spi:max1029");
MODULE_ALIAS("spi:max1031");

MODULE_INFO(srcversion, "DCC656FC427635B09E73BED");
