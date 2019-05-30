cmd_net/netfilter/x_tables.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/netfilter/x_tables.ko net/netfilter/x_tables.o net/netfilter/x_tables.mod.o
