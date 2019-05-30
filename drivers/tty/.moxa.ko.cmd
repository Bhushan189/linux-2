cmd_drivers/tty/moxa.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/tty/moxa.ko drivers/tty/moxa.o drivers/tty/moxa.mod.o
