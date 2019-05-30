cmd_drivers/mtd/nand/nand.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/nand/nand.ko drivers/mtd/nand/nand.o drivers/mtd/nand/nand.mod.o
