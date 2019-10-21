#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#define NDEBUG

void _my_assert(const char *, char *, unsigned int, const char *);
#define my_assert(expr){\
	if(expr)\
		NULL;\
	else\
		_my_assert(#expr, __FILE__, __LINE__, __func__);\
}


void _my_assert(const char *assertion, char *file, unsigned int line, const char *func){
	fflush(stdout);
	fprintf(stderr, "\nAssertion failed: %s : line %u : %s : Assertion '%s' failed.\n", file, line, func, assertion);
	fflush(stderr);
	abort();
}
void foo(int num){
	my_assert( ((num >= 0) && (num <= 100)) );

	printf("foo : num = %d\n", num);
}

void main(int argc, char *argv[]){

	int num;
	if(argc < 2){
		fprintf(stderr, "Usage: my_assert aNumber \n(0 <= aNumber <= 100)\n");
		exit(1);
	}

	num = atoi(argv[1]);
	foo(num);
}
