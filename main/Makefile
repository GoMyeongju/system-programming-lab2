all: static share

static : arithmetic.c
	gcc -I../lib arithmetic.c -o static -L../lib -lstatic

share : arithmetic.c
	gcc -I../lib -L../lib arithmetic.c -o share -Wl,--rpath=../lib -lshare

clean :
	rm -f *.o static share
