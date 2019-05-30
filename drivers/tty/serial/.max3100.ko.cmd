cmd_drivers/tty/serial/max3100.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/tty/serial/max3100.ko drivers/tty/serial/max3100.o drivers/tty/serial/max3100.mod.o
