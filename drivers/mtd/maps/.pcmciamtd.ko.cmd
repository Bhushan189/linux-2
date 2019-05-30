cmd_drivers/mtd/maps/pcmciamtd.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/maps/pcmciamtd.ko drivers/mtd/maps/pcmciamtd.o drivers/mtd/maps/pcmciamtd.mod.o
