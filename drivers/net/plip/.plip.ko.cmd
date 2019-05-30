cmd_drivers/net/plip/plip.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/plip/plip.ko drivers/net/plip/plip.o drivers/net/plip/plip.mod.o
