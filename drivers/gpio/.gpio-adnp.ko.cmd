cmd_drivers/gpio/gpio-adnp.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-adnp.ko drivers/gpio/gpio-adnp.o drivers/gpio/gpio-adnp.mod.o
