cmd_drivers/tty/n_tracerouter.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/tty/n_tracerouter.ko drivers/tty/n_tracerouter.o drivers/tty/n_tracerouter.mod.o
