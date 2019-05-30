cmd_drivers/usb/mon/usbmon.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/usb/mon/usbmon.ko drivers/usb/mon/usbmon.o drivers/usb/mon/usbmon.mod.o
