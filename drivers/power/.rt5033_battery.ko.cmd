cmd_drivers/power/rt5033_battery.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/power/rt5033_battery.ko drivers/power/rt5033_battery.o drivers/power/rt5033_battery.mod.o