cmd_drivers/iio/light/hid-sensor-prox.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/iio/light/hid-sensor-prox.ko drivers/iio/light/hid-sensor-prox.o drivers/iio/light/hid-sensor-prox.mod.o