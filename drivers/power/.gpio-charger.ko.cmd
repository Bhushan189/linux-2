cmd_drivers/power/gpio-charger.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/power/gpio-charger.ko drivers/power/gpio-charger.o drivers/power/gpio-charger.mod.o
