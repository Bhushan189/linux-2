cmd_drivers/gpio/gpio-max732x.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-max732x.ko drivers/gpio/gpio-max732x.o drivers/gpio/gpio-max732x.mod.o
