cmd_drivers/watchdog/da9062_wdt.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/watchdog/da9062_wdt.ko drivers/watchdog/da9062_wdt.o drivers/watchdog/da9062_wdt.mod.o
