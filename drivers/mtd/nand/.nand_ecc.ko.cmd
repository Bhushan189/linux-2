cmd_drivers/mtd/nand/nand_ecc.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/nand/nand_ecc.ko drivers/mtd/nand/nand_ecc.o drivers/mtd/nand/nand_ecc.mod.o
