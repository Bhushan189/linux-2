cmd_drivers/iio/adc/da9150-gpadc.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/iio/adc/da9150-gpadc.ko drivers/iio/adc/da9150-gpadc.o drivers/iio/adc/da9150-gpadc.mod.o