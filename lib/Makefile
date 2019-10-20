all: libstatic.a libshare.so.1.0.1

libstatic.a : sum.o sub.o mul.o div.o
	ar rcs libstatic.a sum.o sub.o mul.o div.o

libshare.so.1.0.1 : sum.o sum.c sub.o sub.c div.o div.c mul.o mul.c
	gcc -fPIC -c sum.c sub.c mul.c div.c
	gcc -shared -Wl,-soname,libshare.so.1 -o libshare.so.1.0.1 sum.o sub.o mul.o div.o
	ln -s libshare.so.1.0.1 libshare.so.1
	ln -s libshare.so.1.0.1 libshare.so

sum.o:
	gcc -c sum.c

sub.o:
	gcc -c sub.c

mul.o:
	gcc -c mul.c

div.o:
	gcc -c div.c

clean :
	rm -f *.o libstatic.a libshare.*
