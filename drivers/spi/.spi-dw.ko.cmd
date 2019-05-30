cmd_drivers/spi/spi-dw.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/spi/spi-dw.ko drivers/spi/spi-dw.o drivers/spi/spi-dw.mod.o
