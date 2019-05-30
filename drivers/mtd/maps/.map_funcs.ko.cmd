cmd_drivers/mtd/maps/map_funcs.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/maps/map_funcs.ko drivers/mtd/maps/map_funcs.o drivers/mtd/maps/map_funcs.mod.o
