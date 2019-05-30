#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:rt8973a");
MODULE_ALIAS("of:N*T*Crichtek,rt8973a-muic");
MODULE_ALIAS("of:N*T*Crichtek,rt8973a-muicC*");

MODULE_INFO(srcversion, "217A377BE64C610A403C6DF");
