cmd_drivers/power/88pm860x_battery.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/power/88pm860x_battery.ko drivers/power/88pm860x_battery.o drivers/power/88pm860x_battery.mod.o