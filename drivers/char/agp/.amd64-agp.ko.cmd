cmd_drivers/char/agp/amd64-agp.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/char/agp/amd64-agp.ko drivers/char/agp/amd64-agp.o drivers/char/agp/amd64-agp.mod.o
