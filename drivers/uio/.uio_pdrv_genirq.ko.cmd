cmd_drivers/uio/uio_pdrv_genirq.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/uio/uio_pdrv_genirq.ko drivers/uio/uio_pdrv_genirq.o drivers/uio/uio_pdrv_genirq.mod.o
