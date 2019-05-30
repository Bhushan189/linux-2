cmd_drivers/gpio/gpio-altera.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-altera.ko drivers/gpio/gpio-altera.o drivers/gpio/gpio-altera.mod.o
