cmd_drivers/acpi/apei/einj.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/acpi/apei/einj.ko drivers/acpi/apei/einj.o drivers/acpi/apei/einj.mod.o
