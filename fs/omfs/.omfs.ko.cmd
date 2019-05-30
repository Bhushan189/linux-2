cmd_fs/omfs/omfs.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o fs/omfs/omfs.ko fs/omfs/omfs.o fs/omfs/omfs.mod.o
