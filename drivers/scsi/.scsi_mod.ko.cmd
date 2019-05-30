cmd_drivers/scsi/scsi_mod.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/scsi/scsi_mod.ko drivers/scsi/scsi_mod.o drivers/scsi/scsi_mod.mod.o
