#include<stdio.h>

print_ary(int* pa, int size);


print_ary(int* pa, int size) { // 배열명과 배열 요소의 개수를 받는 매개변수 선언
	int i;
	size = 10;
	pa[0] = 30;
	//for (i = 0; i < size; i++) { // size 값에 따라 반복 횟수 결정
		//printf("%3d", pa[i]);
	//}
	printf("%d,", size);
	printf("%d", pa[0]);
}

int main() {
	int ary1[5] = { 10,20,30,40,50 }; // 배열 요소의 개수가 5개인 배열
	int ary2[7] = { 10,20,30,40,50,60,70 }; // 배열 요소의 개수가 7개인 배열

	int size = 3;
	print_ary(ary1, size); // ary1 배열 출력, 배열 요소 개수 3개 전달
	printf("\n");
	//print_ary(ary2, 7); // ary2 배열 출력, 배열 요소 개수 7개 전달
	printf("%d,", size);
	printf("%d", ary1[0]);
	return 0;
}

