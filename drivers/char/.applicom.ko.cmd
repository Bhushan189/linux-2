cmd_drivers/char/applicom.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/char/applicom.ko drivers/char/applicom.o drivers/char/applicom.mod.o
