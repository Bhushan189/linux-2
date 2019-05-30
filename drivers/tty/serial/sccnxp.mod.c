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

MODULE_ALIAS("platform:sc2681");
MODULE_ALIAS("platform:sc2691");
MODULE_ALIAS("platform:sc2692");
MODULE_ALIAS("platform:sc2891");
MODULE_ALIAS("platform:sc2892");
MODULE_ALIAS("platform:sc28202");
MODULE_ALIAS("platform:sc68681");
MODULE_ALIAS("platform:sc68692");

MODULE_INFO(srcversion, "0E983C237AAC77CF715A98B");
