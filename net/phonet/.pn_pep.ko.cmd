cmd_net/phonet/pn_pep.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/phonet/pn_pep.ko net/phonet/pn_pep.o net/phonet/pn_pep.mod.o
