#include <stdio.h> 

int main()
{
	int a = 1, b = 1;
	do
	{
		b = 1;
		do
		{
			printf("%d*%d=%d\t", a, b, a * b);
			b++;
		} while (b<=a);
		a++;
		printf("\n");
	} while (a<=9);
	int c = 1;
	int count = 0;
	do
	{
		count = count + c;
		c++;
	} while (c <= 100);
	printf("Sum=%d", count);
	return 0;
}