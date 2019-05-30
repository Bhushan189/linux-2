cmd_drivers/tty/serial/uartlite.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/tty/serial/uartlite.ko drivers/tty/serial/uartlite.o drivers/tty/serial/uartlite.mod.o
