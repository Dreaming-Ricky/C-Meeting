/*#include <stdio.h>

struct student
{
	int	id;
	char name[40];
	double grade;
};

int	main() {
	struct student s1 = { 315, "나준희", 4.4 },
		s2 = { 316, "가준희", 3.7 },
		s3 = { 317, "다준희", 3.2 };

	struct student max;

	max = s1;
	if (s2.grade > max.grade) max = s2;
	if (s3.grade > max.grade) max = s3;

	printf("이번학기 최고의 성적을 거둔 학생입니다.\n");
	printf("학번 : %d\n", s1.id);
	printf("이름 : %s\n", s1.name);
	printf("학점 : %.1f\n", s1.grade);

	return 0;
}*/