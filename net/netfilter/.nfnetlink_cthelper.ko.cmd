cmd_net/netfilter/nfnetlink_cthelper.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/netfilter/nfnetlink_cthelper.ko net/netfilter/nfnetlink_cthelper.o net/netfilter/nfnetlink_cthelper.mod.o