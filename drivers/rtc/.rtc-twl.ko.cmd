cmd_drivers/rtc/rtc-twl.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/rtc/rtc-twl.ko drivers/rtc/rtc-twl.o drivers/rtc/rtc-twl.mod.o
