cmd_drivers/watchdog/retu_wdt.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/watchdog/retu_wdt.ko drivers/watchdog/retu_wdt.o drivers/watchdog/retu_wdt.mod.o
