cmd_drivers/mtd/nand/diskonchip.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/nand/diskonchip.ko drivers/mtd/nand/diskonchip.o drivers/mtd/nand/diskonchip.mod.o
