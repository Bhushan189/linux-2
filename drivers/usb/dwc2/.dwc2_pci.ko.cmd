cmd_drivers/usb/dwc2/dwc2_pci.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/usb/dwc2/dwc2_pci.ko drivers/usb/dwc2/dwc2_pci.o drivers/usb/dwc2/dwc2_pci.mod.o
