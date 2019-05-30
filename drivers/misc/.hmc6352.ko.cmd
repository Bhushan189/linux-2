cmd_drivers/misc/hmc6352.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/misc/hmc6352.ko drivers/misc/hmc6352.o drivers/misc/hmc6352.mod.o
