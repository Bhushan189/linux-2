cmd_drivers/net/sb1000.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/sb1000.ko drivers/net/sb1000.o drivers/net/sb1000.mod.o
