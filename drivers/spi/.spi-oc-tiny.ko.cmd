cmd_drivers/spi/spi-oc-tiny.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/spi/spi-oc-tiny.ko drivers/spi/spi-oc-tiny.o drivers/spi/spi-oc-tiny.mod.o
