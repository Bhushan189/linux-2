cmd_drivers/usb/dwc2/dwc2.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/usb/dwc2/dwc2.ko drivers/usb/dwc2/dwc2.o drivers/usb/dwc2/dwc2.mod.o
