cmd_drivers/input/serio/serport.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/input/serio/serport.ko drivers/input/serio/serport.o drivers/input/serio/serport.mod.o
