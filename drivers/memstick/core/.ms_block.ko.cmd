cmd_drivers/memstick/core/ms_block.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/memstick/core/ms_block.ko drivers/memstick/core/ms_block.o drivers/memstick/core/ms_block.mod.o