cmd_drivers/usb/misc/usbtest.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/usb/misc/usbtest.ko drivers/usb/misc/usbtest.o drivers/usb/misc/usbtest.mod.o
