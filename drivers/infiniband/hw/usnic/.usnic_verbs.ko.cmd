cmd_drivers/infiniband/hw/usnic/usnic_verbs.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/infiniband/hw/usnic/usnic_verbs.ko drivers/infiniband/hw/usnic/usnic_verbs.o drivers/infiniband/hw/usnic/usnic_verbs.mod.o