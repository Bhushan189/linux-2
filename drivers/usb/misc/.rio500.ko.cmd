cmd_drivers/usb/misc/rio500.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/usb/misc/rio500.ko drivers/usb/misc/rio500.o drivers/usb/misc/rio500.mod.o
