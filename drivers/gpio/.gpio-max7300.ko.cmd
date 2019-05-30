cmd_drivers/gpio/gpio-max7300.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-max7300.ko drivers/gpio/gpio-max7300.o drivers/gpio/gpio-max7300.mod.o
