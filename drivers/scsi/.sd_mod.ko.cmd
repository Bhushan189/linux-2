cmd_drivers/scsi/sd_mod.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/scsi/sd_mod.ko drivers/scsi/sd_mod.o drivers/scsi/sd_mod.mod.o
