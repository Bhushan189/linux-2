cmd_fs/quota/quota_v1.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o fs/quota/quota_v1.ko fs/quota/quota_v1.o fs/quota/quota_v1.mod.o
