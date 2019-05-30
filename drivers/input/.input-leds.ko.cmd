cmd_drivers/input/input-leds.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/input/input-leds.ko drivers/input/input-leds.o drivers/input/input-leds.mod.o
