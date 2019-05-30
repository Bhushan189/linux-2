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
"depends=drm_kms_helper,drm";

MODULE_ALIAS("of:N*T*Cnxp,tda998x");
MODULE_ALIAS("of:N*T*Cnxp,tda998xC*");
MODULE_ALIAS("i2c:tda998x");

MODULE_INFO(srcversion, "345DF277953315C7D016867");
