cmd_drivers/mtd/maps/esb2rom.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/maps/esb2rom.ko drivers/mtd/maps/esb2rom.o drivers/mtd/maps/esb2rom.mod.o
