cmd_drivers/rapidio/rapidio.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/rapidio/rapidio.ko drivers/rapidio/rapidio.o drivers/rapidio/rapidio.mod.o
