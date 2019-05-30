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

MODULE_ALIAS("i2c:act8600");
MODULE_ALIAS("i2c:act8846");
MODULE_ALIAS("i2c:act8865");
MODULE_ALIAS("of:N*T*Cactive-semi,act8600");
MODULE_ALIAS("of:N*T*Cactive-semi,act8600C*");
MODULE_ALIAS("of:N*T*Cactive-semi,act8846");
MODULE_ALIAS("of:N*T*Cactive-semi,act8846C*");
MODULE_ALIAS("of:N*T*Cactive-semi,act8865");
MODULE_ALIAS("of:N*T*Cactive-semi,act8865C*");

MODULE_INFO(srcversion, "6E0CDC5038F3DFBF70CE504");
