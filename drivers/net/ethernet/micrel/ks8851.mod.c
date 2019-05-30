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
"depends=mii,eeprom_93cx6";

MODULE_ALIAS("of:N*T*Cmicrel,ks8851");
MODULE_ALIAS("of:N*T*Cmicrel,ks8851C*");

MODULE_INFO(srcversion, "95CD723E4D2EB3D5A7F4CFF");
