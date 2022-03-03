/*#include<stdio.h>

int main() {
	int ary[5] = { 10,20,30,40,50 };
	int* pa = ary;
	int* pb = pa + 3; // 네 번째 배열 요소 주소

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	pa++; //pa를 다음 배열 요소로 이동
	printf("pb - pa : %u\n", pb - pa); // 부호없는 10진수로 출력

	// pb - pa : 배열 요소의 간격차이

	printf("앞에 있는 배열 요소의 값 출력 : ");
	if (pa < pb) // pa가 배열의 앞에 있으면 *pa 출력
		printf("%d\n", *pa);
	else // pb가 배열의 앞에 있으면 *pb 출력
		printf("%d\n", *pb);

	return 0;
}*/