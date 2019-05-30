cmd_drivers/dma/fsl-edma.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/dma/fsl-edma.ko drivers/dma/fsl-edma.o drivers/dma/fsl-edma.mod.o
