cmd_drivers/mtd/nand/plat_nand.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/nand/plat_nand.ko drivers/mtd/nand/plat_nand.o drivers/mtd/nand/plat_nand.mod.o
