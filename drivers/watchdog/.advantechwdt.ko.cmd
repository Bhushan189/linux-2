cmd_drivers/watchdog/advantechwdt.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/watchdog/advantechwdt.ko drivers/watchdog/advantechwdt.o drivers/watchdog/advantechwdt.mod.o