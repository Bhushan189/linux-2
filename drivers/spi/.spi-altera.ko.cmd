cmd_drivers/spi/spi-altera.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/spi/spi-altera.ko drivers/spi/spi-altera.o drivers/spi/spi-altera.mod.o
