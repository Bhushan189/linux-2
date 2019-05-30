cmd_drivers/iio/humidity/htu21.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/iio/humidity/htu21.ko drivers/iio/humidity/htu21.o drivers/iio/humidity/htu21.mod.o
