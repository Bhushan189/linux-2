cmd_drivers/usb/musb/musb_hdrc.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/usb/musb/musb_hdrc.ko drivers/usb/musb/musb_hdrc.o drivers/usb/musb/musb_hdrc.mod.o
