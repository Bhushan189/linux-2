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
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Casahi-kasei,ak4642");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak4642C*");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak4643");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak4643C*");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak4648");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak4648C*");
MODULE_ALIAS("i2c:ak4642");
MODULE_ALIAS("i2c:ak4643");
MODULE_ALIAS("i2c:ak4648");

MODULE_INFO(srcversion, "7BEA17A712F35F32336BB88");