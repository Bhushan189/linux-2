cmd_drivers/extcon/extcon-gpio.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/extcon/extcon-gpio.ko drivers/extcon/extcon-gpio.o drivers/extcon/extcon-gpio.mod.o
