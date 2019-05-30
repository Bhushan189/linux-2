cmd_drivers/mtd/devices/slram.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/devices/slram.ko drivers/mtd/devices/slram.o drivers/mtd/devices/slram.mod.o
