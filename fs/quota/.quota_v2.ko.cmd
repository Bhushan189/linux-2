cmd_fs/quota/quota_v2.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o fs/quota/quota_v2.ko fs/quota/quota_v2.o fs/quota/quota_v2.mod.o
