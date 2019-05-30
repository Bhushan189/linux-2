cmd_drivers/mfd/cros_ec.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mfd/cros_ec.ko drivers/mfd/cros_ec.o drivers/mfd/cros_ec.mod.o
