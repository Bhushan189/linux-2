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

MODULE_ALIAS("acpi*:10508825:*");
MODULE_ALIAS("of:N*T*Cnuvoton,nau8825");
MODULE_ALIAS("of:N*T*Cnuvoton,nau8825C*");
MODULE_ALIAS("i2c:nau8825");

MODULE_INFO(srcversion, "3955566AE8F75C9B3E176E9");
