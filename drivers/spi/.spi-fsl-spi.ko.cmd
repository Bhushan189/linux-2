cmd_drivers/spi/spi-fsl-spi.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/spi/spi-fsl-spi.ko drivers/spi/spi-fsl-spi.o drivers/spi/spi-fsl-spi.mod.o
