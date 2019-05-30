cmd_fs/afs/kafs.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o fs/afs/kafs.ko fs/afs/kafs.o fs/afs/kafs.mod.o
