cmd_drivers/input/mousedev.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/input/mousedev.ko drivers/input/mousedev.o drivers/input/mousedev.mod.o
