cmd_drivers/spi/spi-dw-mmio.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/spi/spi-dw-mmio.ko drivers/spi/spi-dw-mmio.o drivers/spi/spi-dw-mmio.mod.o
