/*#include<stdio.h>

int main()
{
	int a = 10, b = 20;
	const int* pa = &a; //포인터 pa는 변수 a를 가리킴.

	printf("변수 a 값 : %d\n", *pa); // 포인터를 간접 참조하여 a 출력
	a = b; // 포인터가 변수 b를 가리키게 만듬
	printf("변수 b 값 : %d\n", *pa); // 포인터를 간접 참조하여 b 출력
	pa = &a; // 포인터를 간접 참조하여 b 값 출력
	a = 30; // a를 직접 참조하여 값을 바꿈
	printf("변수 a 값 : %d\n", *pa); // 포인터로 간접 참조하여 바뀐 값 출력

	return 0;
}*/