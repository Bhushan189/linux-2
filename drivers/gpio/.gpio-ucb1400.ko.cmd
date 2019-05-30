cmd_drivers/gpio/gpio-ucb1400.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-ucb1400.ko drivers/gpio/gpio-ucb1400.o drivers/gpio/gpio-ucb1400.mod.o
