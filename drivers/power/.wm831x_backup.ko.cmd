cmd_drivers/power/wm831x_backup.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/power/wm831x_backup.ko drivers/power/wm831x_backup.o drivers/power/wm831x_backup.mod.o
