cmd_drivers/hwmon/pmbus/pmbus_core.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/hwmon/pmbus/pmbus_core.ko drivers/hwmon/pmbus/pmbus_core.o drivers/hwmon/pmbus/pmbus_core.mod.o