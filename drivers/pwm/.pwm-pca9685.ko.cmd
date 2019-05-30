cmd_drivers/pwm/pwm-pca9685.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/pwm/pwm-pca9685.ko drivers/pwm/pwm-pca9685.o drivers/pwm/pwm-pca9685.mod.o
