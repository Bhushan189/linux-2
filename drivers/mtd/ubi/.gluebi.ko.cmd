cmd_drivers/mtd/ubi/gluebi.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/ubi/gluebi.ko drivers/mtd/ubi/gluebi.o drivers/mtd/ubi/gluebi.mod.o
