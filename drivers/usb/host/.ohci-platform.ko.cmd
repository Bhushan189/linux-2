cmd_drivers/usb/host/ohci-platform.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/usb/host/ohci-platform.ko drivers/usb/host/ohci-platform.o drivers/usb/host/ohci-platform.mod.o