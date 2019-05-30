cmd_drivers/hid/hid-generic.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/hid/hid-generic.ko drivers/hid/hid-generic.o drivers/hid/hid-generic.mod.o
