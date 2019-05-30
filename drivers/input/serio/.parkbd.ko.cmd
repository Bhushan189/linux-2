cmd_drivers/input/serio/parkbd.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/input/serio/parkbd.ko drivers/input/serio/parkbd.o drivers/input/serio/parkbd.mod.o
