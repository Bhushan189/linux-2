cmd_drivers/uio/uio_netx.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/uio/uio_netx.ko drivers/uio/uio_netx.o drivers/uio/uio_netx.mod.o
