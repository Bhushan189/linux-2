cmd_drivers/usb/misc/lvstest.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/usb/misc/lvstest.ko drivers/usb/misc/lvstest.o drivers/usb/misc/lvstest.mod.o
