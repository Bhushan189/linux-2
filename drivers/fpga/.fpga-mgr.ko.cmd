cmd_drivers/fpga/fpga-mgr.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/fpga/fpga-mgr.ko drivers/fpga/fpga-mgr.o drivers/fpga/fpga-mgr.mod.o
