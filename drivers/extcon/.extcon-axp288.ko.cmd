cmd_drivers/extcon/extcon-axp288.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/extcon/extcon-axp288.ko drivers/extcon/extcon-axp288.o drivers/extcon/extcon-axp288.mod.o