cmd_drivers/iio/pressure/mpl115.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/iio/pressure/mpl115.ko drivers/iio/pressure/mpl115.o drivers/iio/pressure/mpl115.mod.o
