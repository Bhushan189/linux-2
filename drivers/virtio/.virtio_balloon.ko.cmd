cmd_drivers/virtio/virtio_balloon.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/virtio/virtio_balloon.ko drivers/virtio/virtio_balloon.o drivers/virtio/virtio_balloon.mod.o