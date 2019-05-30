cmd_drivers/atm/idt77252.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/atm/idt77252.ko drivers/atm/idt77252.o drivers/atm/idt77252.mod.o
