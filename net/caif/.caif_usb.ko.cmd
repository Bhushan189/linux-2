cmd_net/caif/caif_usb.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/caif/caif_usb.ko net/caif/caif_usb.o net/caif/caif_usb.mod.o
