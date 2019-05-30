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

MODULE_ALIAS("of:N*T*Cxlnx,xuartps");
MODULE_ALIAS("of:N*T*Cxlnx,xuartpsC*");
MODULE_ALIAS("of:N*T*Ccdns,uart-r1p8");
MODULE_ALIAS("of:N*T*Ccdns,uart-r1p8C*");

MODULE_INFO(srcversion, "6FB669CFC78F1A1329744C6");
