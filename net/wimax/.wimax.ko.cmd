cmd_net/wimax/wimax.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/wimax/wimax.ko net/wimax/wimax.o net/wimax/wimax.mod.o
