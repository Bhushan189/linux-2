cmd_drivers/pinctrl/pinctrl-amd.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/pinctrl/pinctrl-amd.ko drivers/pinctrl/pinctrl-amd.o drivers/pinctrl/pinctrl-amd.mod.o
