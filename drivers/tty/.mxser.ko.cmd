cmd_drivers/tty/mxser.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/tty/mxser.ko drivers/tty/mxser.o drivers/tty/mxser.mod.o
