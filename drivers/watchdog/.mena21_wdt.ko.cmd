cmd_drivers/watchdog/mena21_wdt.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/watchdog/mena21_wdt.ko drivers/watchdog/mena21_wdt.o drivers/watchdog/mena21_wdt.mod.o
