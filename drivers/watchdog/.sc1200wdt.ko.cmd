cmd_drivers/watchdog/sc1200wdt.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/watchdog/sc1200wdt.ko drivers/watchdog/sc1200wdt.o drivers/watchdog/sc1200wdt.mod.o
