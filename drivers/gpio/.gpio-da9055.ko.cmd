cmd_drivers/gpio/gpio-da9055.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-da9055.ko drivers/gpio/gpio-da9055.o drivers/gpio/gpio-da9055.mod.o
