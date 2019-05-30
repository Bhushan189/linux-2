cmd_drivers/mtd/mtdoops.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/mtdoops.ko drivers/mtd/mtdoops.o drivers/mtd/mtdoops.mod.o
