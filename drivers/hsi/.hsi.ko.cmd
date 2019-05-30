cmd_drivers/hsi/hsi.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/hsi/hsi.ko drivers/hsi/hsi.o drivers/hsi/hsi.mod.o
