/*#include <stdio.h>

struct profile{ // 나이, 키 구조체 선언
	int age;
	double height;
};

struct student{
	struct profile pf; // profile 구조체를 멤버로 선언
	int id;
	double grade;
};

int main() {
	struct student jhee; // student 구조체 변수 선언
	
	jhee.pf.age = 27;
	jhee.pf.height = 185.8;
	jhee.id = 123;
	jhee.grade = 4.4;

	printf("나이 : %d\n", jhee.pf.age);
	printf("키 : %.1f\n", jhee.pf.height);
	printf("학번 : %d\n", jhee.id);
	printf("학점 : %.1f\n", jhee.grade);

	return 0;
}*/