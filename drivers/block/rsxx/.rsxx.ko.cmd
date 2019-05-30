cmd_drivers/block/rsxx/rsxx.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/block/rsxx/rsxx.ko drivers/block/rsxx/rsxx.o drivers/block/rsxx/rsxx.mod.o
