cmd_drivers/spi/spi-butterfly.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/spi/spi-butterfly.ko drivers/spi/spi-butterfly.o drivers/spi/spi-butterfly.mod.o
