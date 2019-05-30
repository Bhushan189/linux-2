cmd_drivers/usb/isp1760/isp1760.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/usb/isp1760/isp1760.ko drivers/usb/isp1760/isp1760.o drivers/usb/isp1760/isp1760.mod.o
