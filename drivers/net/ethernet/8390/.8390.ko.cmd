cmd_drivers/net/ethernet/8390/8390.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/ethernet/8390/8390.ko drivers/net/ethernet/8390/8390.o drivers/net/ethernet/8390/8390.mod.o