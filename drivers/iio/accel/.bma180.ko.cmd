cmd_drivers/iio/accel/bma180.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/iio/accel/bma180.ko drivers/iio/accel/bma180.o drivers/iio/accel/bma180.mod.o
