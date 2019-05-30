cmd_drivers/nvdimm/nd_e820.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/nvdimm/nd_e820.ko drivers/nvdimm/nd_e820.o drivers/nvdimm/nd_e820.mod.o
