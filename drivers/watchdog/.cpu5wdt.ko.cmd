cmd_drivers/watchdog/cpu5wdt.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/watchdog/cpu5wdt.ko drivers/watchdog/cpu5wdt.o drivers/watchdog/cpu5wdt.mod.o
