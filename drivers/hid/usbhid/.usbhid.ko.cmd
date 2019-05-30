cmd_drivers/hid/usbhid/usbhid.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/hid/usbhid/usbhid.ko drivers/hid/usbhid/usbhid.o drivers/hid/usbhid/usbhid.mod.o
