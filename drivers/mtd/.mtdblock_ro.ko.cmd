cmd_drivers/mtd/mtdblock_ro.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/mtdblock_ro.ko drivers/mtd/mtdblock_ro.o drivers/mtd/mtdblock_ro.mod.o
