#include <stdio.h>

int main()
{
	int p = 0;
	printf("����¥�� �����ﰢ���� ����ðڽ��ϱ�?\n");
	scanf_s("%d", &p);
	for (int i = 0; i <p ; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;


}
