cmd_drivers/mmc/host/via-sdmmc.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mmc/host/via-sdmmc.ko drivers/mmc/host/via-sdmmc.o drivers/mmc/host/via-sdmmc.mod.o