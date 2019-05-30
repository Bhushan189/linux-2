cmd_drivers/scsi/imm.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/scsi/imm.ko drivers/scsi/imm.o drivers/scsi/imm.mod.o
