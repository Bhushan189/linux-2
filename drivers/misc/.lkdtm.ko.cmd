cmd_drivers/misc/lkdtm.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/misc/lkdtm.ko drivers/misc/lkdtm.o drivers/misc/lkdtm.mod.o
