cmd_drivers/gpio/gpio-dln2.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-dln2.ko drivers/gpio/gpio-dln2.o drivers/gpio/gpio-dln2.mod.o
