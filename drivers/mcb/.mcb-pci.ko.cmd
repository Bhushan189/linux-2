cmd_drivers/mcb/mcb-pci.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mcb/mcb-pci.ko drivers/mcb/mcb-pci.o drivers/mcb/mcb-pci.mod.o
