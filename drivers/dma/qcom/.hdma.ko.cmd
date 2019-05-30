cmd_drivers/dma/qcom/hdma.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/dma/qcom/hdma.ko drivers/dma/qcom/hdma.o drivers/dma/qcom/hdma.mod.o
