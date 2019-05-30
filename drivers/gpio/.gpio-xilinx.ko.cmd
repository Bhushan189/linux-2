cmd_drivers/gpio/gpio-xilinx.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-xilinx.ko drivers/gpio/gpio-xilinx.o drivers/gpio/gpio-xilinx.mod.o
