/*#include<stdio.h>

char* pa = "success";
char** ppa = &pa;
char* pb = "failure";
char** ppb = &pb;

swap_ptr(char** ppa, char** ppb) {
	char* tmp = *ppa;
	*ppa = *ppb;
	*ppb = *tmp;

	swap_ptr(&pa, &pb);
}*/