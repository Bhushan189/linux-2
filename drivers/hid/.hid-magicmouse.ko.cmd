cmd_drivers/hid/hid-magicmouse.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/hid/hid-magicmouse.ko drivers/hid/hid-magicmouse.o drivers/hid/hid-magicmouse.mod.o
