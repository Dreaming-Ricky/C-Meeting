/*#include<stdio.h>

int main() {
	int ary[3]; // 배열 선언
	int* pa = ary; // 포인터에 배열명을 저장
	int i; // 반복 제어 변수 선언

	pa[0] = 10; // 첫번째 배열요소에 10 대입
	*(pa + 1) = 20; // 두번째 배열 요소에 20 대입
	pa[2] = pa[0] + pa[1]; // 대괄호를 사용하여 pa를 배열명처럼

	for (i = 0; i < 3; i++)
	{
		printf("%3d", pa[i]);
	}
	return 0;
}*/