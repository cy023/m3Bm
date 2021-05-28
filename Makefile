CC     = arm-none-eabi-gcc
MACH   = cortex-m3
CFLAG  = -c -mcpu=$(MACH) -mthumb -std=c99 -Wall -O0
LDFLAG = -nostdlib -T stm32f107xc.ld -Wl,-Map=m3mb.map

all: main.o startup_stm32f107xc.o m3mb.elf

main.o: main.c
	$(CC) $(CFLAG) -o $@ $^

startup_stm32f107xc.o: startup_stm32f107xc.c
	$(CC) $(CFLAG) -o $@ $^

m3mb.elf: main.o startup_stm32f107xc.o
	$(CC) $(LDFLAG) -o $@ $^

clean:
	rm *.o *.elf *.map