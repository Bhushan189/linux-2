cmd_net/xfrm/xfrm_user.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/xfrm/xfrm_user.ko net/xfrm/xfrm_user.o net/xfrm/xfrm_user.mod.o
