cmd_drivers/misc/phantom.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/misc/phantom.ko drivers/misc/phantom.o drivers/misc/phantom.mod.o
