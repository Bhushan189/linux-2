cmd_drivers/media/v4l2-core/v4l2-mem2mem.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/media/v4l2-core/v4l2-mem2mem.ko drivers/media/v4l2-core/v4l2-mem2mem.o drivers/media/v4l2-core/v4l2-mem2mem.mod.o