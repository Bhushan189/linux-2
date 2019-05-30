cmd_drivers/net/phy/fixed_phy.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/phy/fixed_phy.ko drivers/net/phy/fixed_phy.o drivers/net/phy/fixed_phy.mod.o
