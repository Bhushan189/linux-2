cmd_drivers/w1/masters/w1-gpio.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/w1/masters/w1-gpio.ko drivers/w1/masters/w1-gpio.o drivers/w1/masters/w1-gpio.mod.o
