cmd_drivers/rapidio/rio_cm.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/rapidio/rio_cm.ko drivers/rapidio/rio_cm.o drivers/rapidio/rio_cm.mod.o
