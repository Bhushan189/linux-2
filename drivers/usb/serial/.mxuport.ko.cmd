cmd_drivers/usb/serial/mxuport.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/usb/serial/mxuport.ko drivers/usb/serial/mxuport.o drivers/usb/serial/mxuport.mod.o
