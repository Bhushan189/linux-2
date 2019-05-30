cmd_fs/jffs2/jffs2.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o fs/jffs2/jffs2.ko fs/jffs2/jffs2.o fs/jffs2/jffs2.mod.o
