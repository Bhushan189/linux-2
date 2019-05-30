cmd_drivers/pwm/pwm-twl.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/pwm/pwm-twl.ko drivers/pwm/pwm-twl.o drivers/pwm/pwm-twl.mod.o
