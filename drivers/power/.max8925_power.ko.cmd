cmd_drivers/power/max8925_power.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/power/max8925_power.ko drivers/power/max8925_power.o drivers/power/max8925_power.mod.o
