cmd_drivers/tty/serial/altera_uart.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/tty/serial/altera_uart.ko drivers/tty/serial/altera_uart.o drivers/tty/serial/altera_uart.mod.o