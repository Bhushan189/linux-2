cmd_drivers/iio/imu/bmi160/bmi160_spi.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/iio/imu/bmi160/bmi160_spi.ko drivers/iio/imu/bmi160/bmi160_spi.o drivers/iio/imu/bmi160/bmi160_spi.mod.o