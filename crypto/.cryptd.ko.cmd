cmd_crypto/cryptd.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o crypto/cryptd.ko crypto/cryptd.o crypto/cryptd.mod.o
