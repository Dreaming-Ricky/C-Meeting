/*#include<stdio.h>

int main()
{
	int score[5] = {0,1};
	int i;
	int total = 0;
	double avg;
	int count; // �迭 ����� ������ ������ ����

	printf("%d",sizeof(score));
	printf("\n");
	printf("%d",sizeof(score[0]));
	printf("\n");

	count = sizeof(score) / sizeof(score[0]); // �迭 ����� ���� ���

	for (i = 0; i < count; i++)  //11�࿡�� ����� count��ŭ �ݺ�
	{
		scanf_s("%d", &score[i]);
	}

	for (i = 0; i < count; i++) //11�࿡�� ����� count��ŭ �ݺ�
	{
		total += score[i];
	}
	avg = total / (double)count; //������ count�� ������ ��� ���

	for (i = 0; i < count; i++) //11�࿡�� ����� count��ŭ �ݺ�
	{
		printf("%5d", score[i]);
	}
	printf("\n");
	printf("��� : %.1lf\n", avg);

	return 0;
}*/