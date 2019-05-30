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
"depends=libahci,libata,libahci_platform";

MODULE_ALIAS("of:N*T*Cfsl,ls1021a-ahci");
MODULE_ALIAS("of:N*T*Cfsl,ls1021a-ahciC*");
MODULE_ALIAS("of:N*T*Cfsl,ls1043a-ahci");
MODULE_ALIAS("of:N*T*Cfsl,ls1043a-ahciC*");
MODULE_ALIAS("of:N*T*Cfsl,ls2080a-ahci");
MODULE_ALIAS("of:N*T*Cfsl,ls2080a-ahciC*");

MODULE_INFO(srcversion, "D47A7A6AD5A50708C5C0CE3");
