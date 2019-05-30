cmd_drivers/mtd/chips/map_ram.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/chips/map_ram.ko drivers/mtd/chips/map_ram.o drivers/mtd/chips/map_ram.mod.o
