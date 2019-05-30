cmd_arch/x86/kernel/cpuid.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o arch/x86/kernel/cpuid.ko arch/x86/kernel/cpuid.o arch/x86/kernel/cpuid.mod.o
