cmd_drivers/hwmon/gpio-fan.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/hwmon/gpio-fan.ko drivers/hwmon/gpio-fan.o drivers/hwmon/gpio-fan.mod.o
