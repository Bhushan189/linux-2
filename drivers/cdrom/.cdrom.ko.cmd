cmd_drivers/cdrom/cdrom.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/cdrom/cdrom.ko drivers/cdrom/cdrom.o drivers/cdrom/cdrom.mod.o
