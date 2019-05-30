cmd_net/caif/caif_socket.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/caif/caif_socket.ko net/caif/caif_socket.o net/caif/caif_socket.mod.o
