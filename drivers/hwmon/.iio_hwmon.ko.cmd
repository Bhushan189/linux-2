cmd_drivers/hwmon/iio_hwmon.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/hwmon/iio_hwmon.ko drivers/hwmon/iio_hwmon.o drivers/hwmon/iio_hwmon.mod.o
