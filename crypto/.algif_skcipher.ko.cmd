cmd_crypto/algif_skcipher.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o crypto/algif_skcipher.ko crypto/algif_skcipher.o crypto/algif_skcipher.mod.o
