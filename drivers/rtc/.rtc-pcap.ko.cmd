cmd_drivers/rtc/rtc-pcap.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/rtc/rtc-pcap.ko drivers/rtc/rtc-pcap.o drivers/rtc/rtc-pcap.mod.o
