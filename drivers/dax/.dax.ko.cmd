cmd_drivers/dax/dax.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/dax/dax.ko drivers/dax/dax.o drivers/dax/dax.mod.o
