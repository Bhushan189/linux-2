cmd_drivers/spi/spi-dw-midpci.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/spi/spi-dw-midpci.ko drivers/spi/spi-dw-midpci.o drivers/spi/spi-dw-midpci.mod.o
