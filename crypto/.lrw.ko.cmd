cmd_crypto/lrw.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o crypto/lrw.ko crypto/lrw.o crypto/lrw.mod.o
