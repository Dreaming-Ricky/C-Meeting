/*#include <stdio.h>

struct profile{ // ����, Ű ����ü ����
	int age;
	double height;
};

struct student{
	struct profile pf; // profile ����ü�� ����� ����
	int id;
	double grade;
};

int main() {
	struct student jhee; // student ����ü ���� ����
	
	jhee.pf.age = 27;
	jhee.pf.height = 185.8;
	jhee.id = 123;
	jhee.grade = 4.4;

	printf("���� : %d\n", jhee.pf.age);
	printf("Ű : %.1f\n", jhee.pf.height);
	printf("�й� : %d\n", jhee.id);
	printf("���� : %.1f\n", jhee.grade);

	return 0;
}*/