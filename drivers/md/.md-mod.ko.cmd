cmd_drivers/md/md-mod.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/md-mod.ko drivers/md/md-mod.o drivers/md/md-mod.mod.o
