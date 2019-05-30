cmd_drivers/mtd/devices/mtdram.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/devices/mtdram.ko drivers/mtd/devices/mtdram.o drivers/mtd/devices/mtdram.mod.o
