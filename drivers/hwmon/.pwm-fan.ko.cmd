cmd_drivers/hwmon/pwm-fan.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/hwmon/pwm-fan.ko drivers/hwmon/pwm-fan.o drivers/hwmon/pwm-fan.mod.o
