/*#include<stdio.h>

int main() {
	int ary[3];
	int i=10;

	printf("%d\n", i);
	printf("%d", &i);


	(ary) = 10; // 첫번째 배열요소 즉, ary[0]= 10
	*(ary + 1) = *(ary + 0) + 10; // ary[1] = ary[0] + 10

	printf("세 번째 배열 요소에 키보드 입력 : ");
	scanf_s("%d", ary + 2); // &ary[2]
	scanf_s("%d", &i);

	for (i = 0; i < 3; i++) {
		printf("%5d", *(ary + i));
	}
	return 0;
}*/