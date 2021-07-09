.PHONY: all clean

all: bub-time

bub-time: bub-time.c bubtb.asm
	zcc +rc2014 -subtype=cpm -clib=sdcc_iy -SO3 -v -m --list --max-allocs-per-node100000 $^ -o $@ -create-app

clean:
	rm -f *.map *.bin *.ihx *.lis
