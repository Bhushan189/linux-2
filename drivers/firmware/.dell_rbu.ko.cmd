cmd_drivers/firmware/dell_rbu.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/firmware/dell_rbu.ko drivers/firmware/dell_rbu.o drivers/firmware/dell_rbu.mod.o
