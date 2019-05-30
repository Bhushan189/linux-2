cmd_drivers/mmc/host/mtk-sd.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mmc/host/mtk-sd.ko drivers/mmc/host/mtk-sd.o drivers/mmc/host/mtk-sd.mod.o
