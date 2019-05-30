cmd_drivers/gpio/gpio-ml-ioh.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-ml-ioh.ko drivers/gpio/gpio-ml-ioh.o drivers/gpio/gpio-ml-ioh.mod.o
