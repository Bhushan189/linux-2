cmd_drivers/net/usb/smsc95xx.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/usb/smsc95xx.ko drivers/net/usb/smsc95xx.o drivers/net/usb/smsc95xx.mod.o