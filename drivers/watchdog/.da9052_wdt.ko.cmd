cmd_drivers/watchdog/da9052_wdt.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/watchdog/da9052_wdt.ko drivers/watchdog/da9052_wdt.o drivers/watchdog/da9052_wdt.mod.o
