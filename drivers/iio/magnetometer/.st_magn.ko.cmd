cmd_drivers/iio/magnetometer/st_magn.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/iio/magnetometer/st_magn.ko drivers/iio/magnetometer/st_magn.o drivers/iio/magnetometer/st_magn.mod.o