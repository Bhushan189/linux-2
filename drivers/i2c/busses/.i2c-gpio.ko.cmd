cmd_drivers/i2c/busses/i2c-gpio.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/i2c/busses/i2c-gpio.ko drivers/i2c/busses/i2c-gpio.o drivers/i2c/busses/i2c-gpio.mod.o
