cmd_drivers/spi/spi-cadence.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/spi/spi-cadence.ko drivers/spi/spi-cadence.o drivers/spi/spi-cadence.mod.o
