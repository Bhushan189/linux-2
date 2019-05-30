cmd_drivers/mtd/ftl.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/ftl.ko drivers/mtd/ftl.o drivers/mtd/ftl.mod.o
