cmd_drivers/power/pda_power.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/power/pda_power.ko drivers/power/pda_power.o drivers/power/pda_power.mod.o
