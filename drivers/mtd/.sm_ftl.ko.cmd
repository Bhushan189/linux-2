cmd_drivers/mtd/sm_ftl.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/sm_ftl.ko drivers/mtd/sm_ftl.o drivers/mtd/sm_ftl.mod.o
