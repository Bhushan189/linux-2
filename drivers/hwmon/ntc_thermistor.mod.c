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

MODULE_ALIAS("of:N*T*Cmurata,ncp15wb473");
MODULE_ALIAS("of:N*T*Cmurata,ncp15wb473C*");
MODULE_ALIAS("of:N*T*Cmurata,ncp18wb473");
MODULE_ALIAS("of:N*T*Cmurata,ncp18wb473C*");
MODULE_ALIAS("of:N*T*Cmurata,ncp21wb473");
MODULE_ALIAS("of:N*T*Cmurata,ncp21wb473C*");
MODULE_ALIAS("of:N*T*Cmurata,ncp03wb473");
MODULE_ALIAS("of:N*T*Cmurata,ncp03wb473C*");
MODULE_ALIAS("of:N*T*Cmurata,ncp15wl333");
MODULE_ALIAS("of:N*T*Cmurata,ncp15wl333C*");
MODULE_ALIAS("of:N*T*Cepcos,b57330v2103");
MODULE_ALIAS("of:N*T*Cepcos,b57330v2103C*");
MODULE_ALIAS("of:N*T*Cmurata,ncp03wf104");
MODULE_ALIAS("of:N*T*Cmurata,ncp03wf104C*");
MODULE_ALIAS("of:N*T*Cmurata,ncp15xh103");
MODULE_ALIAS("of:N*T*Cmurata,ncp15xh103C*");
MODULE_ALIAS("of:N*T*Cntc,ncp15wb473");
MODULE_ALIAS("of:N*T*Cntc,ncp15wb473C*");
MODULE_ALIAS("of:N*T*Cntc,ncp18wb473");
MODULE_ALIAS("of:N*T*Cntc,ncp18wb473C*");
MODULE_ALIAS("of:N*T*Cntc,ncp21wb473");
MODULE_ALIAS("of:N*T*Cntc,ncp21wb473C*");
MODULE_ALIAS("of:N*T*Cntc,ncp03wb473");
MODULE_ALIAS("of:N*T*Cntc,ncp03wb473C*");
MODULE_ALIAS("of:N*T*Cntc,ncp15wl333");
MODULE_ALIAS("of:N*T*Cntc,ncp15wl333C*");

MODULE_INFO(srcversion, "97A972848E6306AB190B5EB");
