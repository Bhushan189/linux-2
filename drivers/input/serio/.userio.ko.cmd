cmd_drivers/input/serio/userio.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/input/serio/userio.ko drivers/input/serio/userio.o drivers/input/serio/userio.mod.o
