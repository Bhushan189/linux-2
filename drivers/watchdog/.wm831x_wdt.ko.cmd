cmd_drivers/watchdog/wm831x_wdt.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/watchdog/wm831x_wdt.ko drivers/watchdog/wm831x_wdt.o drivers/watchdog/wm831x_wdt.mod.o
