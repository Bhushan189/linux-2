cmd_drivers/spi/spi-rockchip.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/spi/spi-rockchip.ko drivers/spi/spi-rockchip.o drivers/spi/spi-rockchip.mod.o
