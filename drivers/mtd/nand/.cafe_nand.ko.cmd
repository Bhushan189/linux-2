cmd_drivers/mtd/nand/cafe_nand.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/nand/cafe_nand.ko drivers/mtd/nand/cafe_nand.o drivers/mtd/nand/cafe_nand.mod.o
