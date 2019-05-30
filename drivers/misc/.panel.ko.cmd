cmd_drivers/misc/panel.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/misc/panel.ko drivers/misc/panel.o drivers/misc/panel.mod.o
