cmd_drivers/mtd/nftl.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/nftl.ko drivers/mtd/nftl.o drivers/mtd/nftl.mod.o
