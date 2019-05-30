cmd_drivers/spi/spi-fsl-lib.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/spi/spi-fsl-lib.ko drivers/spi/spi-fsl-lib.o drivers/spi/spi-fsl-lib.mod.o
