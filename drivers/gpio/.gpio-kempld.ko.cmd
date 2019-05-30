cmd_drivers/gpio/gpio-kempld.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-kempld.ko drivers/gpio/gpio-kempld.o drivers/gpio/gpio-kempld.mod.o
