cmd_arch/x86/pci/vmd.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o arch/x86/pci/vmd.ko arch/x86/pci/vmd.o arch/x86/pci/vmd.mod.o
