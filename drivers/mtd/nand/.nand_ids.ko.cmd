cmd_drivers/mtd/nand/nand_ids.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/nand/nand_ids.ko drivers/mtd/nand/nand_ids.o drivers/mtd/nand/nand_ids.mod.o
