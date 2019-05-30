cmd_drivers/spi/spi-xilinx.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/spi/spi-xilinx.ko drivers/spi/spi-xilinx.o drivers/spi/spi-xilinx.mod.o
