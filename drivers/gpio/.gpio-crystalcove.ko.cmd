cmd_drivers/gpio/gpio-crystalcove.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-crystalcove.ko drivers/gpio/gpio-crystalcove.o drivers/gpio/gpio-crystalcove.mod.o