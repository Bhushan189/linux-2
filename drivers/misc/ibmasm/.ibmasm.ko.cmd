cmd_drivers/misc/ibmasm/ibmasm.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/misc/ibmasm/ibmasm.ko drivers/misc/ibmasm/ibmasm.o drivers/misc/ibmasm/ibmasm.mod.o
