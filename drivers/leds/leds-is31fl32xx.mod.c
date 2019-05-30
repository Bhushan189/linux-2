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

MODULE_ALIAS("i2c:is31fl3236");
MODULE_ALIAS("i2c:is31fl3235");
MODULE_ALIAS("i2c:is31fl3218");
MODULE_ALIAS("i2c:sn3218");
MODULE_ALIAS("i2c:is31fl3216");
MODULE_ALIAS("i2c:sn3216");
MODULE_ALIAS("of:N*T*Cissi,is31fl3236");
MODULE_ALIAS("of:N*T*Cissi,is31fl3236C*");
MODULE_ALIAS("of:N*T*Cissi,is31fl3235");
MODULE_ALIAS("of:N*T*Cissi,is31fl3235C*");
MODULE_ALIAS("of:N*T*Cissi,is31fl3218");
MODULE_ALIAS("of:N*T*Cissi,is31fl3218C*");
MODULE_ALIAS("of:N*T*Csi-en,sn3218");
MODULE_ALIAS("of:N*T*Csi-en,sn3218C*");
MODULE_ALIAS("of:N*T*Cissi,is31fl3216");
MODULE_ALIAS("of:N*T*Cissi,is31fl3216C*");
MODULE_ALIAS("of:N*T*Csi-en,sn3216");
MODULE_ALIAS("of:N*T*Csi-en,sn3216C*");

MODULE_INFO(srcversion, "7505CFB393AA384F64632AB");
