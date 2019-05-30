cmd_drivers/ata/ahci_qoriq.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/ata/ahci_qoriq.ko drivers/ata/ahci_qoriq.o drivers/ata/ahci_qoriq.mod.o
