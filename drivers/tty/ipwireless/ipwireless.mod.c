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
"depends=pcmcia,ppp_generic,pcmcia_core";

MODULE_ALIAS("pcmcia:m02F2c0100f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02F2c0200f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "3B933C5998EF54121D13F24");