#include <stdio.h>

int solve(int num)
{
	if (num != 0)
		return (num % 2 + 10 * solve(num/2));
	else
		return 0;
}

int main(void)
{	
	int a;
	printf("2진수로 변환할 양의 정수를 입력하세요: ");
	scanf_s("%d", &a);
	printf("%d", solve(a));

	return 0;
}