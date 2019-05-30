cmd_drivers/misc/lkdtm_rodata_objcopy.o := objcopy  --set-section-flags .text=alloc,readonly --rename-section .text=.rodata drivers/misc/lkdtm_rodata.o drivers/misc/lkdtm_rodata_objcopy.o
