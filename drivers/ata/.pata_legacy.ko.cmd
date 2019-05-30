cmd_drivers/ata/pata_legacy.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/ata/pata_legacy.ko drivers/ata/pata_legacy.o drivers/ata/pata_legacy.mod.o
