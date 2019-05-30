cmd_drivers/usb/host/xhci-hcd.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/usb/host/xhci-hcd.ko drivers/usb/host/xhci-hcd.o drivers/usb/host/xhci-hcd.mod.o
