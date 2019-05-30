cmd_drivers/rtc/rtc-ds1302.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/rtc/rtc-ds1302.ko drivers/rtc/rtc-ds1302.o drivers/rtc/rtc-ds1302.mod.o
