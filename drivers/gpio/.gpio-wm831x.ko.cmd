cmd_drivers/gpio/gpio-wm831x.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-wm831x.ko drivers/gpio/gpio-wm831x.o drivers/gpio/gpio-wm831x.mod.o
