cmd_drivers/mtd/mtdswap.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/mtdswap.ko drivers/mtd/mtdswap.o drivers/mtd/mtdswap.mod.o
