cmd_drivers/watchdog/dw_wdt.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/watchdog/dw_wdt.ko drivers/watchdog/dw_wdt.o drivers/watchdog/dw_wdt.mod.o
