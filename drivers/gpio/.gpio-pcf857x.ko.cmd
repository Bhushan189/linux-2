cmd_drivers/gpio/gpio-pcf857x.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-pcf857x.ko drivers/gpio/gpio-pcf857x.o drivers/gpio/gpio-pcf857x.mod.o
