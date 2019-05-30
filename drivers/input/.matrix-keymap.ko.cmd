cmd_drivers/input/matrix-keymap.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/input/matrix-keymap.ko drivers/input/matrix-keymap.o drivers/input/matrix-keymap.mod.o
