#include <stdio.h>

int main()
{
	int a=1;
	int b=1;

	while (a<=9)
	{
		b = 1;
		while (b<=a)
		{
			printf("%d*%d=%d\t", a, b, a * b);
			b++;
			
		}
		a++;
		printf("\n");
	}
	//arithmetic series
	//find the sum from 1 add up to 100
	int c = 1;
	int count = 0;

	while (c<=100)
	{
		count = count + c;
		c++;
	}
	printf("Sum=%d", count);
	return 0;
}