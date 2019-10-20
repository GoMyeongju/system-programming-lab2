#include <stdio.h>
#include "sum.h"
#include "sub.h"
#include "mul.h"
#include "div.h"

int main(int argc, char *argv){

	int a = 100, b = 20;

	printf("덧셈 : %d\n", sum(a, b));
	printf("뺄셈 : %d\n", sub(a, b));
	printf("곱셈 : %d\n", mul(a, b));
	printf("나눗셈 : %d\n", div(a, b));
}
