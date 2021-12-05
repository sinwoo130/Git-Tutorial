#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct cities
{
	char name[20];
	char country[20];
	char population[20];
} Cities;

void cityinfo(Cities* sptr)
{	
	printf("%s in %s with a population of %s people\n", sptr->name, sptr->country, sptr->population);
}

int main(void)
{
	Cities arr[3];
	int i;

	printf("Input three cities: \n");

	for (i = 0; i < 3; i++)
	{
		printf("Name>");fgets(arr[i].name,20,stdin);
		printf("Country>");fgets(arr[i].country,20,stdin);
		printf("Population>");fgets(arr[i].population,20,stdin);
	}
	printf("\n");
	printf("Printing the three cities: \n");

	printf("%d.", 1);
	cityinfo(&arr[0]);
	printf("%d.", 2);
	cityinfo(&arr[1]);
	printf("%d.", 3);
	cityinfo(&arr[2]);

	return 0;
}
