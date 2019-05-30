cmd_drivers/gpio/gpio-sch.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-sch.ko drivers/gpio/gpio-sch.o drivers/gpio/gpio-sch.mod.o
