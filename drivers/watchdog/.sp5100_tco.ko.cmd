cmd_drivers/watchdog/sp5100_tco.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/watchdog/sp5100_tco.ko drivers/watchdog/sp5100_tco.o drivers/watchdog/sp5100_tco.mod.o