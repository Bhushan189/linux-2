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
"depends=tpm";

MODULE_ALIAS("of:N*T*Cnuvoton,npct501");
MODULE_ALIAS("of:N*T*Cnuvoton,npct501C*");
MODULE_ALIAS("of:N*T*Cwinbond,wpct301");
MODULE_ALIAS("of:N*T*Cwinbond,wpct301C*");
MODULE_ALIAS("of:N*T*Cnuvoton,npct601");
MODULE_ALIAS("of:N*T*Cnuvoton,npct601C*");
MODULE_ALIAS("i2c:tpm_i2c_nuvoton");
MODULE_ALIAS("i2c:tpm2_i2c_nuvoton");

MODULE_INFO(srcversion, "E8E073DDEC37CD90E8A68A7");
