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
"depends=libahci_platform,libahci,libata";

MODULE_ALIAS("of:N*T*Cceva,ahci-1v84");
MODULE_ALIAS("of:N*T*Cceva,ahci-1v84C*");

MODULE_INFO(srcversion, "66DF35F2C5B911EFD30FCEA");
