cmd_drivers/staging/speakup/speakup_audptr.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/staging/speakup/speakup_audptr.ko drivers/staging/speakup/speakup_audptr.o drivers/staging/speakup/speakup_audptr.mod.o