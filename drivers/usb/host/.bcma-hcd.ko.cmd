cmd_drivers/usb/host/bcma-hcd.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/usb/host/bcma-hcd.ko drivers/usb/host/bcma-hcd.o drivers/usb/host/bcma-hcd.mod.o
