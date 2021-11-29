#include <stdio.h>

int convCase(char str[])
{	
	const int diff = 'a' - 'A';	
	int i,len = 0;
	len = strlen(str);

	for (i = 0; i < len; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += diff;
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= diff;
		}
	}
}
int main(void)
{
	char str[100];

	printf("Input> ");

	fgets(str, sizeof(str), stdin);

	convCase(str);

	printf("output> %s", str);
	
	return 0;
}