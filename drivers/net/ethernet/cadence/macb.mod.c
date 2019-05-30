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
"depends=libphy,of_mdio";

MODULE_ALIAS("of:N*T*Ccdns,at32ap7000-macb");
MODULE_ALIAS("of:N*T*Ccdns,at32ap7000-macbC*");
MODULE_ALIAS("of:N*T*Ccdns,at91sam9260-macb");
MODULE_ALIAS("of:N*T*Ccdns,at91sam9260-macbC*");
MODULE_ALIAS("of:N*T*Ccdns,macb");
MODULE_ALIAS("of:N*T*Ccdns,macbC*");
MODULE_ALIAS("of:N*T*Ccdns,np4-macb");
MODULE_ALIAS("of:N*T*Ccdns,np4-macbC*");
MODULE_ALIAS("of:N*T*Ccdns,pc302-gem");
MODULE_ALIAS("of:N*T*Ccdns,pc302-gemC*");
MODULE_ALIAS("of:N*T*Ccdns,gem");
MODULE_ALIAS("of:N*T*Ccdns,gemC*");
MODULE_ALIAS("of:N*T*Catmel,sama5d2-gem");
MODULE_ALIAS("of:N*T*Catmel,sama5d2-gemC*");
MODULE_ALIAS("of:N*T*Catmel,sama5d3-gem");
MODULE_ALIAS("of:N*T*Catmel,sama5d3-gemC*");
MODULE_ALIAS("of:N*T*Catmel,sama5d4-gem");
MODULE_ALIAS("of:N*T*Catmel,sama5d4-gemC*");
MODULE_ALIAS("of:N*T*Ccdns,at91rm9200-emac");
MODULE_ALIAS("of:N*T*Ccdns,at91rm9200-emacC*");
MODULE_ALIAS("of:N*T*Ccdns,emac");
MODULE_ALIAS("of:N*T*Ccdns,emacC*");
MODULE_ALIAS("of:N*T*Ccdns,zynqmp-gem");
MODULE_ALIAS("of:N*T*Ccdns,zynqmp-gemC*");
MODULE_ALIAS("of:N*T*Ccdns,zynq-gem");
MODULE_ALIAS("of:N*T*Ccdns,zynq-gemC*");

MODULE_INFO(srcversion, "27859CECC214D1AD16393D6");
