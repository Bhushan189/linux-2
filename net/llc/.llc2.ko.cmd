cmd_net/llc/llc2.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/llc/llc2.ko net/llc/llc2.o net/llc/llc2.mod.o
