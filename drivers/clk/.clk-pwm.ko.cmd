cmd_drivers/clk/clk-pwm.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/clk/clk-pwm.ko drivers/clk/clk-pwm.o drivers/clk/clk-pwm.mod.o
