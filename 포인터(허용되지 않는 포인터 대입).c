#include<stdio.h>

int main() {
	int a = 10;
	int* p = &a;
	double* pd                     ;

	pd = p;
	printf("%lf", *pd);

	return 0;
}