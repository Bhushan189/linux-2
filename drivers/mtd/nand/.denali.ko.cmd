cmd_drivers/mtd/nand/denali.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/nand/denali.ko drivers/mtd/nand/denali.o drivers/mtd/nand/denali.mod.o
