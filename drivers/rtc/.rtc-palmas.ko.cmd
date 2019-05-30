cmd_drivers/rtc/rtc-palmas.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/rtc/rtc-palmas.ko drivers/rtc/rtc-palmas.o drivers/rtc/rtc-palmas.mod.o
