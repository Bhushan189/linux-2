cmd_drivers/cpufreq/powernow-k8.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/cpufreq/powernow-k8.ko drivers/cpufreq/powernow-k8.o drivers/cpufreq/powernow-k8.mod.o