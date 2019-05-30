cmd_drivers/rapidio/rio-scan.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/rapidio/rio-scan.ko drivers/rapidio/rio-scan.o drivers/rapidio/rio-scan.mod.o
