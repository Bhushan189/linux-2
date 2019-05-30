cmd_drivers/gpio/gpio-lynxpoint.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-lynxpoint.ko drivers/gpio/gpio-lynxpoint.o drivers/gpio/gpio-lynxpoint.mod.o
