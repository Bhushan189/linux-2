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

MODULE_ALIAS("of:N*T*Cns8250");
MODULE_ALIAS("of:N*T*Cns8250C*");
MODULE_ALIAS("of:N*T*Cns16450");
MODULE_ALIAS("of:N*T*Cns16450C*");
MODULE_ALIAS("of:N*T*Cns16550a");
MODULE_ALIAS("of:N*T*Cns16550aC*");
MODULE_ALIAS("of:N*T*Cns16550");
MODULE_ALIAS("of:N*T*Cns16550C*");
MODULE_ALIAS("of:N*T*Cns16750");
MODULE_ALIAS("of:N*T*Cns16750C*");
MODULE_ALIAS("of:N*T*Cns16850");
MODULE_ALIAS("of:N*T*Cns16850C*");
MODULE_ALIAS("of:N*T*Cnvidia,tegra20-uart");
MODULE_ALIAS("of:N*T*Cnvidia,tegra20-uartC*");
MODULE_ALIAS("of:N*T*Cnxp,lpc3220-uart");
MODULE_ALIAS("of:N*T*Cnxp,lpc3220-uartC*");
MODULE_ALIAS("of:N*T*Cralink,rt2880-uart");
MODULE_ALIAS("of:N*T*Cralink,rt2880-uartC*");
MODULE_ALIAS("of:N*T*Caltr,16550-FIFO32");
MODULE_ALIAS("of:N*T*Caltr,16550-FIFO32C*");
MODULE_ALIAS("of:N*T*Caltr,16550-FIFO64");
MODULE_ALIAS("of:N*T*Caltr,16550-FIFO64C*");
MODULE_ALIAS("of:N*T*Caltr,16550-FIFO128");
MODULE_ALIAS("of:N*T*Caltr,16550-FIFO128C*");
MODULE_ALIAS("of:N*T*Cmrvl,mmp-uart");
MODULE_ALIAS("of:N*T*Cmrvl,mmp-uartC*");
MODULE_ALIAS("of:N*T*Cmrvl,pxa-uart");
MODULE_ALIAS("of:N*T*Cmrvl,pxa-uartC*");

MODULE_INFO(srcversion, "A5FF1F6B27142BAD45C9856");
