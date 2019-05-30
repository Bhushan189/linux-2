cmd_drivers/usb/host/ssb-hcd.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/usb/host/ssb-hcd.ko drivers/usb/host/ssb-hcd.o drivers/usb/host/ssb-hcd.mod.o
