cmd_drivers/misc/c2port/core.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/misc/c2port/core.ko drivers/misc/c2port/core.o drivers/misc/c2port/core.mod.o
