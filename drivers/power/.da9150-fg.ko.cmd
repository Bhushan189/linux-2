cmd_drivers/power/da9150-fg.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/power/da9150-fg.ko drivers/power/da9150-fg.o drivers/power/da9150-fg.mod.o
