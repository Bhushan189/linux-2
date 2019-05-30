cmd_drivers/atm/lanai.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/atm/lanai.ko drivers/atm/lanai.o drivers/atm/lanai.mod.o
