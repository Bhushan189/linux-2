cmd_drivers/char/agp/agpgart.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/char/agp/agpgart.ko drivers/char/agp/agpgart.o drivers/char/agp/agpgart.mod.o
