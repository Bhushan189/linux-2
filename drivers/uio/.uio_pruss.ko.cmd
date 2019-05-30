cmd_drivers/uio/uio_pruss.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/uio/uio_pruss.ko drivers/uio/uio_pruss.o drivers/uio/uio_pruss.mod.o
