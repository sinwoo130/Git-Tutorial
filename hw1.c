#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int num1, num2;
	printf("�� ������ �Է��ϼ���: ");
	scanf("%d %d", &num1, &num2);
	printf("%d \n", num1 & num2);
	printf("%d \n", num1 | num2);
	printf("%d \n", num1 ^ num2);
	return 0;
}