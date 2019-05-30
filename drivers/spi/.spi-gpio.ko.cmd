cmd_drivers/spi/spi-gpio.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/spi/spi-gpio.ko drivers/spi/spi-gpio.o drivers/spi/spi-gpio.mod.o
