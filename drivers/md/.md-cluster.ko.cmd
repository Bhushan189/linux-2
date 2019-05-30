cmd_drivers/md/md-cluster.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/md-cluster.ko drivers/md/md-cluster.o drivers/md/md-cluster.mod.o
