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
"depends=st-nci";

MODULE_ALIAS("acpi*:SMO2101:*");
MODULE_ALIAS("of:N*T*Cst,st21nfcb-spi");
MODULE_ALIAS("of:N*T*Cst,st21nfcb-spiC*");
MODULE_ALIAS("spi:st_nci_spi");

MODULE_INFO(srcversion, "C04648E4F645FD8B197B331");
