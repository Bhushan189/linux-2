cmd_net/phonet/phonet.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/phonet/phonet.ko net/phonet/phonet.o net/phonet/phonet.mod.o
