cmd_drivers/char/nvram.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/char/nvram.ko drivers/char/nvram.o drivers/char/nvram.mod.o
