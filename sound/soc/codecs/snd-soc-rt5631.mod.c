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
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("i2c:rt5631");
MODULE_ALIAS("i2c:alc5631");
MODULE_ALIAS("of:N*T*Crealtek,rt5631");
MODULE_ALIAS("of:N*T*Crealtek,rt5631C*");
MODULE_ALIAS("of:N*T*Crealtek,alc5631");
MODULE_ALIAS("of:N*T*Crealtek,alc5631C*");

MODULE_INFO(srcversion, "113D4A6C6A407C12CA90D10");
