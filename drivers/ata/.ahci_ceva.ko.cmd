cmd_drivers/ata/ahci_ceva.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/ata/ahci_ceva.ko drivers/ata/ahci_ceva.o drivers/ata/ahci_ceva.mod.o
