cmd_net/802/fddi.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/802/fddi.ko net/802/fddi.o net/802/fddi.mod.o
