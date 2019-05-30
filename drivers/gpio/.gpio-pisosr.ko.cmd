cmd_drivers/gpio/gpio-pisosr.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-pisosr.ko drivers/gpio/gpio-pisosr.o drivers/gpio/gpio-pisosr.mod.o
