#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int num1, num2;
	printf("두 정수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);
	printf("%d \n", num1 & num2);
	printf("%d \n", num1 | num2);
	printf("%d \n", num1 ^ num2);
	return 0;
}