cmd_drivers/hid/hid-ntrig.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/hid/hid-ntrig.ko drivers/hid/hid-ntrig.o drivers/hid/hid-ntrig.mod.o
