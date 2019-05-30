cmd_drivers/leds/leds-pwm.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/leds/leds-pwm.ko drivers/leds/leds-pwm.o drivers/leds/leds-pwm.mod.o
