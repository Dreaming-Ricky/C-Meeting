/*#include<stdio.h>

int main()
{
	int score[5] = {0,1};
	int i;
	int total = 0;
	double avg;
	int count; // 배열 요소의 개수를 저장할 변수

	printf("%d",sizeof(score));
	printf("\n");
	printf("%d",sizeof(score[0]));
	printf("\n");

	count = sizeof(score) / sizeof(score[0]); // 배열 요소의 개수 계산

	for (i = 0; i < count; i++)  //11행에서 계산한 count만큼 반복
	{
		scanf_s("%d", &score[i]);
	}

	for (i = 0; i < count; i++) //11행에서 계산한 count만큼 반복
	{
		total += score[i];
	}
	avg = total / (double)count; //총합을 count로 나누어 평균 계산

	for (i = 0; i < count; i++) //11행에서 계산한 count만큼 반복
	{
		printf("%5d", score[i]);
	}
	printf("\n");
	printf("평균 : %.1lf\n", avg);

	return 0;
}*/