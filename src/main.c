#include <stdio.h>
#include <math.h>
#include <testkv.h>

int main()
{
	float a = 0.0, b = 0.0, c = 0.0;
	float d = 0.0;
	float k1 = 0.0;
	float k2 = 0.0;
	
	printf("Input firt element a:\n");
	scanf("%f", &a);
	
	printf("Input second element b:\n");
	scanf("%f", &b);
	
	printf("Input third element c:\n");
	scanf("%f", &c);
	
	d = b * b - 4 * a * c;
	
	if (d >= 0)
	{
		k1 = (-b + sqrt(d)) / (2 * a);
		k2 = (-b - sqrt(d)) / (2 * a);
		
		printf("K1: %f\n", k1);
		printf("K2: %f\n", k2);
	}
	else
	{
		printf("disr < 0");
	}

	return 0;
}