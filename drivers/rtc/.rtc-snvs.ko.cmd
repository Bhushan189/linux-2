cmd_drivers/rtc/rtc-snvs.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/rtc/rtc-snvs.ko drivers/rtc/rtc-snvs.o drivers/rtc/rtc-snvs.mod.o
