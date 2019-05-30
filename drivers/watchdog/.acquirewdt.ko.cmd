cmd_drivers/watchdog/acquirewdt.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/watchdog/acquirewdt.ko drivers/watchdog/acquirewdt.o drivers/watchdog/acquirewdt.mod.o
