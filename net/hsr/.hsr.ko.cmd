cmd_net/hsr/hsr.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/hsr/hsr.ko net/hsr/hsr.o net/hsr/hsr.mod.o
