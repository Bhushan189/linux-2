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
"depends=industrialio";

MODULE_ALIAS("of:N*T*Cti,ads8684");
MODULE_ALIAS("of:N*T*Cti,ads8684C*");
MODULE_ALIAS("of:N*T*Cti,ads8688");
MODULE_ALIAS("of:N*T*Cti,ads8688C*");
MODULE_ALIAS("spi:ads8684");
MODULE_ALIAS("spi:ads8688");

MODULE_INFO(srcversion, "93C1D10978FB54EB25815CB");
