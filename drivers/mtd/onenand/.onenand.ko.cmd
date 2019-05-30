cmd_drivers/mtd/onenand/onenand.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/onenand/onenand.ko drivers/mtd/onenand/onenand.o drivers/mtd/onenand/onenand.mod.o
