cmd_drivers/char/raw.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/char/raw.ko drivers/char/raw.o drivers/char/raw.mod.o
