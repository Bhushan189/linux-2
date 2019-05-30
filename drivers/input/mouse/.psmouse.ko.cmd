cmd_drivers/input/mouse/psmouse.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/input/mouse/psmouse.ko drivers/input/mouse/psmouse.o drivers/input/mouse/psmouse.mod.o
