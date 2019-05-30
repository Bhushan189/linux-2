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
"depends=industrialio,ms_sensors_i2c";

MODULE_ALIAS("i2c:ms5637");
MODULE_ALIAS("i2c:ms5805");
MODULE_ALIAS("i2c:ms5837");
MODULE_ALIAS("i2c:ms8607-temppressure");

MODULE_INFO(srcversion, "0DD6400FF874A4D7A943D2F");
