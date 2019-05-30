cmd_drivers/leds/leds-gpio.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/leds/leds-gpio.ko drivers/leds/leds-gpio.o drivers/leds/leds-gpio.mod.o
