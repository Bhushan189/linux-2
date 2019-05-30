cmd_drivers/mtd/maps/pci.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/maps/pci.ko drivers/mtd/maps/pci.o drivers/mtd/maps/pci.mod.o
