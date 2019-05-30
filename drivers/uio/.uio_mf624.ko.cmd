cmd_drivers/uio/uio_mf624.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/uio/uio_mf624.ko drivers/uio/uio_mf624.o drivers/uio/uio_mf624.mod.o
