cmd_net/atm/mpoa.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/atm/mpoa.ko net/atm/mpoa.o net/atm/mpoa.mod.o
