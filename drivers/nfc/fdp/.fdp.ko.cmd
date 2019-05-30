cmd_drivers/nfc/fdp/fdp.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/nfc/fdp/fdp.ko drivers/nfc/fdp/fdp.o drivers/nfc/fdp/fdp.mod.o
