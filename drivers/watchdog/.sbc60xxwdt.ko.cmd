cmd_drivers/watchdog/sbc60xxwdt.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/watchdog/sbc60xxwdt.ko drivers/watchdog/sbc60xxwdt.o drivers/watchdog/sbc60xxwdt.mod.o
