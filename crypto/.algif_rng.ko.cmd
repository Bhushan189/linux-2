cmd_crypto/algif_rng.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o crypto/algif_rng.ko crypto/algif_rng.o crypto/algif_rng.mod.o
