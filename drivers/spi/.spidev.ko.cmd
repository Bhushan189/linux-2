cmd_drivers/spi/spidev.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/spi/spidev.ko drivers/spi/spidev.o drivers/spi/spidev.mod.o
