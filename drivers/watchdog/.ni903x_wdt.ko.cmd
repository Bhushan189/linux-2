cmd_drivers/watchdog/ni903x_wdt.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/watchdog/ni903x_wdt.ko drivers/watchdog/ni903x_wdt.o drivers/watchdog/ni903x_wdt.mod.o
