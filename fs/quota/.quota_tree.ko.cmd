cmd_fs/quota/quota_tree.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o fs/quota/quota_tree.ko fs/quota/quota_tree.o fs/quota/quota_tree.mod.o
