#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, discriminant;
	float x1, x2;
	printf("Welcome to the quadratic solver!\nPlease enter the number a,b,c for the discriminant:b*b-4*a*c!\n");
	scanf_s("%f%f%f", &a, &b, &c);
	discriminant = b * b - 4 * a * c;

	if (discriminant > 0)
	{
		x1 = (-b + sqrt(discriminant)) / (2 * a);
		x2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("When both roots are real and different\n");
		printf("The first Root is %f\n", x1);
		printf("The second Root is %f\n", x2);
	}
	else if (discriminant == 0)
	{
		x1 = -b/(2*a);
		x2 = x1;
		printf("When both roots are real and equal\n");
		printf("The first root is %f", x1);
		printf("The first rootis %f", x2);
	}
	else
	{
		printf("Roots are imeainary");
	}

	return 0;
}