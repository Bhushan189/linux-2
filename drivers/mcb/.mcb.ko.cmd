cmd_drivers/mcb/mcb.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mcb/mcb.ko drivers/mcb/mcb.o drivers/mcb/mcb.mod.o
