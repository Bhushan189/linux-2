cmd_net/kcm/kcm.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/kcm/kcm.ko net/kcm/kcm.o net/kcm/kcm.mod.o
