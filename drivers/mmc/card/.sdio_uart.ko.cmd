cmd_drivers/mmc/card/sdio_uart.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mmc/card/sdio_uart.ko drivers/mmc/card/sdio_uart.o drivers/mmc/card/sdio_uart.mod.o
