cmd_drivers/mtd/rfd_ftl.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/rfd_ftl.ko drivers/mtd/rfd_ftl.o drivers/mtd/rfd_ftl.mod.o
