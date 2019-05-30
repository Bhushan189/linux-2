cmd_drivers/acpi/acpi_extlog.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/acpi/acpi_extlog.ko drivers/acpi/acpi_extlog.o drivers/acpi/acpi_extlog.mod.o
