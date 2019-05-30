cmd_drivers/acpi/ac.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/acpi/ac.ko drivers/acpi/ac.o drivers/acpi/ac.mod.o
