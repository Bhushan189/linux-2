cmd_drivers/gpio/gpio-grgpio.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-grgpio.ko drivers/gpio/gpio-grgpio.o drivers/gpio/gpio-grgpio.mod.o
