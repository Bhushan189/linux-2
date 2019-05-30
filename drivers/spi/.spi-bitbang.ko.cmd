cmd_drivers/spi/spi-bitbang.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/spi/spi-bitbang.ko drivers/spi/spi-bitbang.o drivers/spi/spi-bitbang.mod.o
