cmd_drivers/mtd/cmdlinepart.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/cmdlinepart.ko drivers/mtd/cmdlinepart.o drivers/mtd/cmdlinepart.mod.o
