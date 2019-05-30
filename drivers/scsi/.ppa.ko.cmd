cmd_drivers/scsi/ppa.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/scsi/ppa.ko drivers/scsi/ppa.o drivers/scsi/ppa.mod.o
