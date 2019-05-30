cmd_net/caif/caif.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/caif/caif.ko net/caif/caif.o net/caif/caif.mod.o
