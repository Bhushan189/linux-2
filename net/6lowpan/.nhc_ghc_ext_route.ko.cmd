cmd_net/6lowpan/nhc_ghc_ext_route.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/6lowpan/nhc_ghc_ext_route.ko net/6lowpan/nhc_ghc_ext_route.o net/6lowpan/nhc_ghc_ext_route.mod.o