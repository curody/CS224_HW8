BASE=`basename $(DIRNAME)`
DIST=cma_cody-curry_HW8.tar

all: ma
ma: ma.c cma.c cma.h
	gcc -w ma.c cma.c -o ma
debug: cma.c ma.c
	gcc -DDODEBUG=1 cma.c ma.c -o debug
debugme: cma.c ma.c cma.patch
	gcc -DDODEBUG=1 cma.c ma.c cma.patch -o debug
dist: clean
	tar -cvf $(DIST) ./$(BASE)
clean:
	rm -f ma
	rm -f debug
