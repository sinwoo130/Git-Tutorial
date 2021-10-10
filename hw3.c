#include <stdio.h>

int main()
{
	int num, a;
	int b = 0;

	printf("Enter a positive integer : ");
	scanf_s("%d", &num);

	for (a = 1; a <= num; a++) {
		if (num % a == 0){
			b += 1;
		}
	}
	if (b == 2)
		printf("It's a prime number.");
	else
		printf("It's not a prime number.");

}