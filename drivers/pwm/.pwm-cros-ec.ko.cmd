cmd_drivers/pwm/pwm-cros-ec.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/pwm/pwm-cros-ec.ko drivers/pwm/pwm-cros-ec.o drivers/pwm/pwm-cros-ec.mod.o
