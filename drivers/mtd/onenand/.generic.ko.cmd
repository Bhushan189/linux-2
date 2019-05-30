cmd_drivers/mtd/onenand/generic.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/onenand/generic.ko drivers/mtd/onenand/generic.o drivers/mtd/onenand/generic.mod.o
