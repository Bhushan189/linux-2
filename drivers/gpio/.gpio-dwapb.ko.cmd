cmd_drivers/gpio/gpio-dwapb.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-dwapb.ko drivers/gpio/gpio-dwapb.o drivers/gpio/gpio-dwapb.mod.o
