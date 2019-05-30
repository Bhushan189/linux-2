cmd_drivers/watchdog/da9055_wdt.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/watchdog/da9055_wdt.ko drivers/watchdog/da9055_wdt.o drivers/watchdog/da9055_wdt.mod.o
