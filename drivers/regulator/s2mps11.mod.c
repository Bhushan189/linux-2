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

MODULE_ALIAS("platform:s2mps11-regulator");
MODULE_ALIAS("platform:s2mps13-regulator");
MODULE_ALIAS("platform:s2mps14-regulator");
MODULE_ALIAS("platform:s2mps15-regulator");
MODULE_ALIAS("platform:s2mpu02-regulator");

MODULE_INFO(srcversion, "08008B78CB038981DD65A9B");
