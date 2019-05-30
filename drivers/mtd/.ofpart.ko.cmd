cmd_drivers/mtd/ofpart.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/ofpart.ko drivers/mtd/ofpart.o drivers/mtd/ofpart.mod.o
