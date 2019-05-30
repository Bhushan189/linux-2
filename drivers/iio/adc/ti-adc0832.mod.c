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
"depends=industrialio";

MODULE_ALIAS("spi:adc0831");
MODULE_ALIAS("spi:adc0832");
MODULE_ALIAS("spi:adc0834");
MODULE_ALIAS("spi:adc0838");
MODULE_ALIAS("of:N*T*Cti,adc0831");
MODULE_ALIAS("of:N*T*Cti,adc0831C*");
MODULE_ALIAS("of:N*T*Cti,adc0832");
MODULE_ALIAS("of:N*T*Cti,adc0832C*");
MODULE_ALIAS("of:N*T*Cti,adc0834");
MODULE_ALIAS("of:N*T*Cti,adc0834C*");
MODULE_ALIAS("of:N*T*Cti,adc0838");
MODULE_ALIAS("of:N*T*Cti,adc0838C*");

MODULE_INFO(srcversion, "92CF037866F6027EABC96FD");
