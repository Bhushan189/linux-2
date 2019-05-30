cmd_drivers/mtd/nand/nandsim.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/nand/nandsim.ko drivers/mtd/nand/nandsim.o drivers/mtd/nand/nandsim.mod.o
