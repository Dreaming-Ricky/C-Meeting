/*#include<stdio.h>

int main() {
	int ary[5] = { 10,20,30,40,50 };
	int* pa = ary;
	int* pb = pa + 3; // �� ��° �迭 ��� �ּ�

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	pa++; //pa�� ���� �迭 ��ҷ� �̵�
	printf("pb - pa : %u\n", pb - pa); // ��ȣ���� 10������ ���

	// pb - pa : �迭 ����� ��������

	printf("�տ� �ִ� �迭 ����� �� ��� : ");
	if (pa < pb) // pa�� �迭�� �տ� ������ *pa ���
		printf("%d\n", *pa);
	else // pb�� �迭�� �տ� ������ *pb ���
		printf("%d\n", *pb);

	return 0;
}*/