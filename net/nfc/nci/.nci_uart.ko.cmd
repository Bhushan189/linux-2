cmd_net/nfc/nci/nci_uart.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/nfc/nci/nci_uart.ko net/nfc/nci/nci_uart.o net/nfc/nci/nci_uart.mod.o
