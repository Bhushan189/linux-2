cmd_drivers/gpio/gpio-wm8350.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-wm8350.ko drivers/gpio/gpio-wm8350.o drivers/gpio/gpio-wm8350.mod.o
