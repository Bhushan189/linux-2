cmd_drivers/scsi/dpt_i2o.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/scsi/dpt_i2o.ko drivers/scsi/dpt_i2o.o drivers/scsi/dpt_i2o.mod.o
