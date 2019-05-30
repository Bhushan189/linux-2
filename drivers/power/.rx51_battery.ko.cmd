cmd_drivers/power/rx51_battery.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/power/rx51_battery.ko drivers/power/rx51_battery.o drivers/power/rx51_battery.mod.o
