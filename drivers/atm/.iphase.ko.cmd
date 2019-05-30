cmd_drivers/atm/iphase.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/atm/iphase.ko drivers/atm/iphase.o drivers/atm/iphase.mod.o
