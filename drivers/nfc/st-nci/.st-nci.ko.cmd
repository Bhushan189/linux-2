cmd_drivers/nfc/st-nci/st-nci.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/nfc/st-nci/st-nci.ko drivers/nfc/st-nci/st-nci.o drivers/nfc/st-nci/st-nci.mod.o
