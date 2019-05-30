cmd_drivers/tty/n_tracesink.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/tty/n_tracesink.ko drivers/tty/n_tracesink.o drivers/tty/n_tracesink.mod.o
