cmd_drivers/gpio/gpio-mc33880.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-mc33880.ko drivers/gpio/gpio-mc33880.o drivers/gpio/gpio-mc33880.mod.o
