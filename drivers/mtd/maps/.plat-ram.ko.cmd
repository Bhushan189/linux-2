cmd_drivers/mtd/maps/plat-ram.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/maps/plat-ram.ko drivers/mtd/maps/plat-ram.o drivers/mtd/maps/plat-ram.mod.o
