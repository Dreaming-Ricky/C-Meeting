#include<stdio.h>

print_ary(int* pa, int size);


print_ary(int* pa, int size) { // �迭��� �迭 ����� ������ �޴� �Ű����� ����
	int i;
	size = 10;
	pa[0] = 30;
	//for (i = 0; i < size; i++) { // size ���� ���� �ݺ� Ƚ�� ����
		//printf("%3d", pa[i]);
	//}
	printf("%d,", size);
	printf("%d", pa[0]);
}

int main() {
	int ary1[5] = { 10,20,30,40,50 }; // �迭 ����� ������ 5���� �迭
	int ary2[7] = { 10,20,30,40,50,60,70 }; // �迭 ����� ������ 7���� �迭

	int size = 3;
	print_ary(ary1, size); // ary1 �迭 ���, �迭 ��� ���� 3�� ����
	printf("\n");
	//print_ary(ary2, 7); // ary2 �迭 ���, �迭 ��� ���� 7�� ����
	printf("%d,", size);
	printf("%d", ary1[0]);
	return 0;
}

