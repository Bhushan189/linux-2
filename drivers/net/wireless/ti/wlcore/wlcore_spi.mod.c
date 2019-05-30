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
"depends=crc7";

MODULE_ALIAS("of:N*T*Cti,wl1271");
MODULE_ALIAS("of:N*T*Cti,wl1271C*");
MODULE_ALIAS("of:N*T*Cti,wl1273");
MODULE_ALIAS("of:N*T*Cti,wl1273C*");
MODULE_ALIAS("of:N*T*Cti,wl1281");
MODULE_ALIAS("of:N*T*Cti,wl1281C*");
MODULE_ALIAS("of:N*T*Cti,wl1283");
MODULE_ALIAS("of:N*T*Cti,wl1283C*");
MODULE_ALIAS("of:N*T*Cti,wl1801");
MODULE_ALIAS("of:N*T*Cti,wl1801C*");
MODULE_ALIAS("of:N*T*Cti,wl1805");
MODULE_ALIAS("of:N*T*Cti,wl1805C*");
MODULE_ALIAS("of:N*T*Cti,wl1807");
MODULE_ALIAS("of:N*T*Cti,wl1807C*");
MODULE_ALIAS("of:N*T*Cti,wl1831");
MODULE_ALIAS("of:N*T*Cti,wl1831C*");
MODULE_ALIAS("of:N*T*Cti,wl1835");
MODULE_ALIAS("of:N*T*Cti,wl1835C*");
MODULE_ALIAS("of:N*T*Cti,wl1837");
MODULE_ALIAS("of:N*T*Cti,wl1837C*");

MODULE_INFO(srcversion, "FC6FA82A46291AF8015541D");
