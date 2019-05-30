cmd_arch/x86/kernel/msr.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o arch/x86/kernel/msr.ko arch/x86/kernel/msr.o arch/x86/kernel/msr.mod.o
