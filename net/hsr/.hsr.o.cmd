cmd_net/hsr/hsr.o := ld -m elf_x86_64   -r -o net/hsr/hsr.o net/hsr/hsr_main.o net/hsr/hsr_framereg.o net/hsr/hsr_device.o net/hsr/hsr_netlink.o net/hsr/hsr_slave.o net/hsr/hsr_forward.o 
