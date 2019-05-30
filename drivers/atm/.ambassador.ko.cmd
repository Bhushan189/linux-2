cmd_drivers/atm/ambassador.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/atm/ambassador.ko drivers/atm/ambassador.o drivers/atm/ambassador.mod.o
