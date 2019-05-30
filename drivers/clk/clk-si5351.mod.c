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

MODULE_ALIAS("i2c:si5351a");
MODULE_ALIAS("i2c:si5351a-msop");
MODULE_ALIAS("i2c:si5351b");
MODULE_ALIAS("i2c:si5351c");
MODULE_ALIAS("of:N*T*Csilabs,si5351a");
MODULE_ALIAS("of:N*T*Csilabs,si5351aC*");
MODULE_ALIAS("of:N*T*Csilabs,si5351a-msop");
MODULE_ALIAS("of:N*T*Csilabs,si5351a-msopC*");
MODULE_ALIAS("of:N*T*Csilabs,si5351b");
MODULE_ALIAS("of:N*T*Csilabs,si5351bC*");
MODULE_ALIAS("of:N*T*Csilabs,si5351c");
MODULE_ALIAS("of:N*T*Csilabs,si5351cC*");

MODULE_INFO(srcversion, "92EDD826D41FD10313E5933");
