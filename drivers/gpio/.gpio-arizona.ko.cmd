cmd_drivers/gpio/gpio-arizona.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-arizona.ko drivers/gpio/gpio-arizona.o drivers/gpio/gpio-arizona.mod.o
