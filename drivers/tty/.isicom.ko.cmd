cmd_drivers/tty/isicom.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/tty/isicom.ko drivers/tty/isicom.o drivers/tty/isicom.mod.o
