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

MODULE_INFO(staging, "Y");

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi_pci,comedi_8255,comedi,comedi_8254";

MODULE_ALIAS("pci:v00001307d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000000Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000001Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000004Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000001Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000001Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "392076B41B4238DAF9DB597");
