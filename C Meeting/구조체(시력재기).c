#include<stdio.h>

struct vision
{
	double left;
	double right;
};

struct vision exchange(struct vision robot);

int main() {
	struct vision robot;

	printf("�÷� �Է� : ");
	scanf_s("%1f&1f", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("�ٲ� �÷� : %.1f %.1f\n", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot) {
	double temp;

	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;

	return robot;
}
