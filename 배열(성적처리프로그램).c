/*#include<stdio.h>

int main()
{
	int score[5]; // 다섯 과목의 성적을 입력할 int 배열 선언
	int i; // 반복 제어 변수
	int total = 0; // 총점을 누적할 변수
	double avg; // 평균을 저장할 변수

	for (i = 0; i < 5; i++) { // i가 0부터 4까지 5번 반복
		scanf_s("%d", &score[i]); // 각 배열 요소에 성적 입력
	}
	for (i = 0; i < 5; i++) {
		total += score[i];
	}
	avg = total / 5.0;

	for (i = 0; i < 5; i++) {
		printf("%5d", score[i]);
	}
	printf("\n");
	printf("평균 : %.1lf\n", avg); // "%.1lf\n" : 소숫점 첫째자리만 나타내라

	return 0;
}*/
