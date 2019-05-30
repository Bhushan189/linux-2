cmd_drivers/mmc/card/mmc_test.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mmc/card/mmc_test.ko drivers/mmc/card/mmc_test.o drivers/mmc/card/mmc_test.mod.o
