cmd_crypto/algif_hash.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o crypto/algif_hash.ko crypto/algif_hash.o crypto/algif_hash.mod.o
