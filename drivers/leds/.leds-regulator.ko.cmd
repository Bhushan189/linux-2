cmd_drivers/leds/leds-regulator.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/leds/leds-regulator.ko drivers/leds/leds-regulator.o drivers/leds/leds-regulator.mod.o
