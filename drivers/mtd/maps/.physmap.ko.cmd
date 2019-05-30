cmd_drivers/mtd/maps/physmap.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/maps/physmap.ko drivers/mtd/maps/physmap.o drivers/mtd/maps/physmap.mod.o
