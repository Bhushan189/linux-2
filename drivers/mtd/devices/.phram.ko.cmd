cmd_drivers/mtd/devices/phram.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/devices/phram.ko drivers/mtd/devices/phram.o drivers/mtd/devices/phram.mod.o
