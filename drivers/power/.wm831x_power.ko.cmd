cmd_drivers/power/wm831x_power.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/power/wm831x_power.ko drivers/power/wm831x_power.o drivers/power/wm831x_power.mod.o
