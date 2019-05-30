cmd_fs/ntfs/ntfs.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o fs/ntfs/ntfs.ko fs/ntfs/ntfs.o fs/ntfs/ntfs.mod.o
