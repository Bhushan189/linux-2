cmd_drivers/regulator/fixed.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/regulator/fixed.ko drivers/regulator/fixed.o drivers/regulator/fixed.mod.o
