/*#define _CRT_SECURE_NO_WARNINGS // 안정성을 이유로 경고발생(버퍼나 스택 등 메모리에 문제가 생길 수도 있기때문)
#include<stdio.h>
#include<string.h> //문자열 관련 함수 원형을 모아놓은 헤더 파일


int main()
{
	char str[80] = "rabbit";
	char str1[80];

	strcpy(str, "tiger");
	strcpy(str1, str);
	printf("%s, %s\n", str, str1);

	return 0;
}*/