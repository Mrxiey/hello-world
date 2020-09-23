#include <stdio.h>

int main()
{
	int a, b;
	for (a = 1; a <= 9; a++)
	{
		b = 1;
		for (b = 0; b<=a; b++)
		{
			printf("%d*%d=%d\t", a, b, a * b);
		}
		printf("\n");
	}
	
	int c;
	int count = 0;
	for (c=1; c<= 100; c++)
	{
		count = count + c;
	}
	printf("Sum=%d", count);
	return 0;

}