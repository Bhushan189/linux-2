cmd_drivers/mtd/inftl.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/inftl.ko drivers/mtd/inftl.o drivers/mtd/inftl.mod.o
