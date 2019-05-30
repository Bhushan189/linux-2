cmd_drivers/mtd/nand/gpio.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/nand/gpio.ko drivers/mtd/nand/gpio.o drivers/mtd/nand/gpio.mod.o
