cmd_drivers/power/sbs-battery.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/power/sbs-battery.ko drivers/power/sbs-battery.o drivers/power/sbs-battery.mod.o
