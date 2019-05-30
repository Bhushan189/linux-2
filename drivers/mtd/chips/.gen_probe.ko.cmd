cmd_drivers/mtd/chips/gen_probe.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/chips/gen_probe.ko drivers/mtd/chips/gen_probe.o drivers/mtd/chips/gen_probe.mod.o
