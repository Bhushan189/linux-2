cmd_drivers/gpio/gpio-twl4030.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-twl4030.ko drivers/gpio/gpio-twl4030.o drivers/gpio/gpio-twl4030.mod.o
