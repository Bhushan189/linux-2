cmd_drivers/usb/misc/ehset.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/usb/misc/ehset.ko drivers/usb/misc/ehset.o drivers/usb/misc/ehset.mod.o
