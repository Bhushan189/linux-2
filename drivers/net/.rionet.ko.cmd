cmd_drivers/net/rionet.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/rionet.ko drivers/net/rionet.o drivers/net/rionet.mod.o
