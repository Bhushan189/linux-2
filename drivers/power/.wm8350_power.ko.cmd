cmd_drivers/power/wm8350_power.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/power/wm8350_power.ko drivers/power/wm8350_power.o drivers/power/wm8350_power.mod.o
