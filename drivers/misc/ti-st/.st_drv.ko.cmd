cmd_drivers/misc/ti-st/st_drv.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/misc/ti-st/st_drv.ko drivers/misc/ti-st/st_drv.o drivers/misc/ti-st/st_drv.mod.o
