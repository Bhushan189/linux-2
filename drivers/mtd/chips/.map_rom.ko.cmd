cmd_drivers/mtd/chips/map_rom.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/chips/map_rom.ko drivers/mtd/chips/map_rom.o drivers/mtd/chips/map_rom.mod.o
