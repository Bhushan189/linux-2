cmd_drivers/regulator/wm831x-dcdc.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/regulator/wm831x-dcdc.ko drivers/regulator/wm831x-dcdc.o drivers/regulator/wm831x-dcdc.mod.o