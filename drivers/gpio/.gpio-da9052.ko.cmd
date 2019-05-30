cmd_drivers/gpio/gpio-da9052.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-da9052.ko drivers/gpio/gpio-da9052.o drivers/gpio/gpio-da9052.mod.o
