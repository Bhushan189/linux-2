cmd_drivers/gpio/gpio-it87.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-it87.ko drivers/gpio/gpio-it87.o drivers/gpio/gpio-it87.mod.o
