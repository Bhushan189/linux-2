cmd_crypto/af_alg.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o crypto/af_alg.ko crypto/af_alg.o crypto/af_alg.mod.o
