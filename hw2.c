#include <stdio.h>

main()

{
	double kilometers, mile = 0;

	printf("Please enter kilometers : ");
	scanf("%lf", &kilometers);

	mile = kilometers / 1.609;

	printf("%.1lf km is equal to %.1lf miles. \n", kilometers, mile);
	return 0;
}