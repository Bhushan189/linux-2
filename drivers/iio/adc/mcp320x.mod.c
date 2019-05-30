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

MODULE_ALIAS("spi:mcp3001");
MODULE_ALIAS("spi:mcp3002");
MODULE_ALIAS("spi:mcp3004");
MODULE_ALIAS("spi:mcp3008");
MODULE_ALIAS("spi:mcp3201");
MODULE_ALIAS("spi:mcp3202");
MODULE_ALIAS("spi:mcp3204");
MODULE_ALIAS("spi:mcp3208");
MODULE_ALIAS("spi:mcp3301");
MODULE_ALIAS("of:N*T*Cmcp3001");
MODULE_ALIAS("of:N*T*Cmcp3001C*");
MODULE_ALIAS("of:N*T*Cmcp3002");
MODULE_ALIAS("of:N*T*Cmcp3002C*");
MODULE_ALIAS("of:N*T*Cmcp3004");
MODULE_ALIAS("of:N*T*Cmcp3004C*");
MODULE_ALIAS("of:N*T*Cmcp3008");
MODULE_ALIAS("of:N*T*Cmcp3008C*");
MODULE_ALIAS("of:N*T*Cmcp3201");
MODULE_ALIAS("of:N*T*Cmcp3201C*");
MODULE_ALIAS("of:N*T*Cmcp3202");
MODULE_ALIAS("of:N*T*Cmcp3202C*");
MODULE_ALIAS("of:N*T*Cmcp3204");
MODULE_ALIAS("of:N*T*Cmcp3204C*");
MODULE_ALIAS("of:N*T*Cmcp3208");
MODULE_ALIAS("of:N*T*Cmcp3208C*");
MODULE_ALIAS("of:N*T*Cmcp3301");
MODULE_ALIAS("of:N*T*Cmcp3301C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3001");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3001C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3002");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3002C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3004");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3004C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3008");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3008C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3201");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3201C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3202");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3202C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3204");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3204C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3208");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3208C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3301");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3301C*");

MODULE_INFO(srcversion, "8F6D84CBD96E21FBD5E7114");
