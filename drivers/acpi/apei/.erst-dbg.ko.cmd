cmd_drivers/acpi/apei/erst-dbg.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/acpi/apei/erst-dbg.ko drivers/acpi/apei/erst-dbg.o drivers/acpi/apei/erst-dbg.mod.o
