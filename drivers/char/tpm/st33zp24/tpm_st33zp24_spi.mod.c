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
"depends=tpm_st33zp24";

MODULE_ALIAS("of:N*T*Cst,st33zp24-spi");
MODULE_ALIAS("of:N*T*Cst,st33zp24-spiC*");
MODULE_ALIAS("spi:st33zp24-spi");
MODULE_ALIAS("acpi*:SMO3324:*");

MODULE_INFO(srcversion, "D9CD249370060D910D2060A");
