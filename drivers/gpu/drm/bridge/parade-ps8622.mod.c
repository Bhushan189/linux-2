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

MODULE_ALIAS("i2c:ps8622");
MODULE_ALIAS("i2c:ps8625");
MODULE_ALIAS("of:N*T*Cparade,ps8622");
MODULE_ALIAS("of:N*T*Cparade,ps8622C*");
MODULE_ALIAS("of:N*T*Cparade,ps8625");
MODULE_ALIAS("of:N*T*Cparade,ps8625C*");

MODULE_INFO(srcversion, "5A30D4EA25C2F3CD6F346C8");
