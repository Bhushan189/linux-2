cmd_drivers/gpio/gpio-amdpt.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-amdpt.ko drivers/gpio/gpio-amdpt.o drivers/gpio/gpio-amdpt.mod.o
