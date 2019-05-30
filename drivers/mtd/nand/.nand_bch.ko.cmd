cmd_drivers/mtd/nand/nand_bch.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/nand/nand_bch.ko drivers/mtd/nand/nand_bch.o drivers/mtd/nand/nand_bch.mod.o
