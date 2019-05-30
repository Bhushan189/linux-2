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

MODULE_ALIAS("of:N*T*Csilabs,si570");
MODULE_ALIAS("of:N*T*Csilabs,si570C*");
MODULE_ALIAS("of:N*T*Csilabs,si571");
MODULE_ALIAS("of:N*T*Csilabs,si571C*");
MODULE_ALIAS("of:N*T*Csilabs,si598");
MODULE_ALIAS("of:N*T*Csilabs,si598C*");
MODULE_ALIAS("of:N*T*Csilabs,si599");
MODULE_ALIAS("of:N*T*Csilabs,si599C*");
MODULE_ALIAS("i2c:si570");
MODULE_ALIAS("i2c:si571");
MODULE_ALIAS("i2c:si598");
MODULE_ALIAS("i2c:si599");

MODULE_INFO(srcversion, "0C93C82A2591631FE7A950F");
