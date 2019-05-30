cmd_drivers/watchdog/wm8350_wdt.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/watchdog/wm8350_wdt.ko drivers/watchdog/wm8350_wdt.o drivers/watchdog/wm8350_wdt.mod.o
