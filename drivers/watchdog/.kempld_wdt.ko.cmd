cmd_drivers/watchdog/kempld_wdt.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/watchdog/kempld_wdt.ko drivers/watchdog/kempld_wdt.o drivers/watchdog/kempld_wdt.mod.o
