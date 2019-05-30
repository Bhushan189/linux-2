cmd_drivers/spmi/spmi.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/spmi/spmi.ko drivers/spmi/spmi.o drivers/spmi/spmi.mod.o
