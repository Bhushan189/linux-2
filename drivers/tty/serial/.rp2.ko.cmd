cmd_drivers/tty/serial/rp2.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/tty/serial/rp2.ko drivers/tty/serial/rp2.o drivers/tty/serial/rp2.mod.o
