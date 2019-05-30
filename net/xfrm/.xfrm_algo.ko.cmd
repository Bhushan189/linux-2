cmd_net/xfrm/xfrm_algo.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/xfrm/xfrm_algo.ko net/xfrm/xfrm_algo.o net/xfrm/xfrm_algo.mod.o
