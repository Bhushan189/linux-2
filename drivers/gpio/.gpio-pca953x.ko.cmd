cmd_drivers/gpio/gpio-pca953x.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-pca953x.ko drivers/gpio/gpio-pca953x.o drivers/gpio/gpio-pca953x.mod.o
