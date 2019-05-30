cmd_drivers/mtd/spi-nor/spi-nor.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/spi-nor/spi-nor.ko drivers/mtd/spi-nor/spi-nor.o drivers/mtd/spi-nor/spi-nor.mod.o
