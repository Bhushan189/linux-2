cmd_drivers/rtc/rtc-s5m.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/rtc/rtc-s5m.ko drivers/rtc/rtc-s5m.o drivers/rtc/rtc-s5m.mod.o
