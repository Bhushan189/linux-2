cmd_drivers/net/can/grcan.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/can/grcan.ko drivers/net/can/grcan.o drivers/net/can/grcan.mod.o
