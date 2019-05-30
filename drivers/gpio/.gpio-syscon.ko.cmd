cmd_drivers/gpio/gpio-syscon.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-syscon.ko drivers/gpio/gpio-syscon.o drivers/gpio/gpio-syscon.mod.o
