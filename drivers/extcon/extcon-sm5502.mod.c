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

MODULE_ALIAS("i2c:sm5502");
MODULE_ALIAS("of:N*T*Csiliconmitus,sm5502-muic");
MODULE_ALIAS("of:N*T*Csiliconmitus,sm5502-muicC*");

MODULE_INFO(srcversion, "14C99E3F8EC8E6F606229E2");
