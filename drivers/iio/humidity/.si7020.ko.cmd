cmd_drivers/iio/humidity/si7020.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/iio/humidity/si7020.ko drivers/iio/humidity/si7020.o drivers/iio/humidity/si7020.mod.o
