cmd_drivers/ipack/ipack.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/ipack/ipack.ko drivers/ipack/ipack.o drivers/ipack/ipack.mod.o
