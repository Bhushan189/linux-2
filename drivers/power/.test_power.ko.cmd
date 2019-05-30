cmd_drivers/power/test_power.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/power/test_power.ko drivers/power/test_power.o drivers/power/test_power.mod.o
