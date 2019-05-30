cmd_drivers/uio/uio_dmem_genirq.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/uio/uio_dmem_genirq.ko drivers/uio/uio_dmem_genirq.o drivers/uio/uio_dmem_genirq.mod.o
