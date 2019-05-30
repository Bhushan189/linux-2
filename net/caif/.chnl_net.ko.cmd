cmd_net/caif/chnl_net.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/caif/chnl_net.ko net/caif/chnl_net.o net/caif/chnl_net.mod.o
