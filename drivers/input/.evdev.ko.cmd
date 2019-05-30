cmd_drivers/input/evdev.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/input/evdev.ko drivers/input/evdev.o drivers/input/evdev.mod.o
