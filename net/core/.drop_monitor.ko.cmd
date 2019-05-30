cmd_net/core/drop_monitor.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/core/drop_monitor.ko net/core/drop_monitor.o net/core/drop_monitor.mod.o
