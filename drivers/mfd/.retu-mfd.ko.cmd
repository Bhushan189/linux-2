cmd_drivers/mfd/retu-mfd.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mfd/retu-mfd.ko drivers/mfd/retu-mfd.o drivers/mfd/retu-mfd.mod.o
