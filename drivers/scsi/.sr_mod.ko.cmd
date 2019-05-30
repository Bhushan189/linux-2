cmd_drivers/scsi/sr_mod.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/scsi/sr_mod.ko drivers/scsi/sr_mod.o drivers/scsi/sr_mod.mod.o
