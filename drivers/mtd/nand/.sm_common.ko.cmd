cmd_drivers/mtd/nand/sm_common.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/nand/sm_common.ko drivers/mtd/nand/sm_common.o drivers/mtd/nand/sm_common.mod.o
