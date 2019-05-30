cmd_drivers/misc/ds1682.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/misc/ds1682.ko drivers/misc/ds1682.o drivers/misc/ds1682.mod.o
