cmd_drivers/firmware/dmi-sysfs.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/firmware/dmi-sysfs.ko drivers/firmware/dmi-sysfs.o drivers/firmware/dmi-sysfs.mod.o
