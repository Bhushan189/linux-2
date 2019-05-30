cmd_drivers/mtd/ssfdc.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/ssfdc.ko drivers/mtd/ssfdc.o drivers/mtd/ssfdc.mod.o
