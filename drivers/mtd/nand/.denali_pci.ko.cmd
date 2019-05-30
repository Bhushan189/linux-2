cmd_drivers/mtd/nand/denali_pci.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/nand/denali_pci.ko drivers/mtd/nand/denali_pci.o drivers/mtd/nand/denali_pci.mod.o
