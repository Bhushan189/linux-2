cmd_drivers/watchdog/gpio_wdt.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/watchdog/gpio_wdt.ko drivers/watchdog/gpio_wdt.o drivers/watchdog/gpio_wdt.mod.o
