cmd_drivers/regulator/virtual.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/regulator/virtual.ko drivers/regulator/virtual.o drivers/regulator/virtual.mod.o
