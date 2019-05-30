cmd_drivers/of/of_mdio.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/of/of_mdio.ko drivers/of/of_mdio.o drivers/of/of_mdio.mod.o
