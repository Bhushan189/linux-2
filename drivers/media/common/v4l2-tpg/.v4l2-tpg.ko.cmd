cmd_drivers/media/common/v4l2-tpg/v4l2-tpg.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/media/common/v4l2-tpg/v4l2-tpg.ko drivers/media/common/v4l2-tpg/v4l2-tpg.o drivers/media/common/v4l2-tpg/v4l2-tpg.mod.o