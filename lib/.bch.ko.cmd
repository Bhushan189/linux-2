cmd_lib/bch.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o lib/bch.ko lib/bch.o lib/bch.mod.o
