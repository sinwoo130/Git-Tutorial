#include <stdio.h>
#include <math.h>
int main(void)
{
	double pow(double a, double b);
	double sqrt(double x);
	
	double a, x, average, v, s, sum = 0;

	int arr[5];
	printf("Enter 5 real numbers:");

	for (int i = 0; i < 5; i++)
		scanf_s("%d", &arr[i]);

	for (int i = 0; i < 5; i++)
		sum += arr[i];

	average = (sum / 5);

	double pow(double a, double b);
	{
		double p = 0;
		for (int i = 0; i < 5; i++)
			p += (arr[i] - average)* (arr[i] - average);
		v = (p / 5);
	}
	
	s = sqrt(v);

	printf("Standard Deviation = %lf", s);

	return 0;
}
