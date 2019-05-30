cmd_net/rxrpc/af-rxrpc.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/rxrpc/af-rxrpc.ko net/rxrpc/af-rxrpc.o net/rxrpc/af-rxrpc.mod.o
