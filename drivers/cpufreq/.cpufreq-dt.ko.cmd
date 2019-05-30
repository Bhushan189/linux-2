cmd_drivers/cpufreq/cpufreq-dt.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/cpufreq/cpufreq-dt.ko drivers/cpufreq/cpufreq-dt.o drivers/cpufreq/cpufreq-dt.mod.o
