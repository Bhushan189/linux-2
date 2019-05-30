cmd_drivers/mtd/maps/ichxrom.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/maps/ichxrom.ko drivers/mtd/maps/ichxrom.o drivers/mtd/maps/ichxrom.mod.o
