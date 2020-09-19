#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Please enter 3 numbers.\n");
	scanf_s("%d%d%d", &a, &b, &c);
	if ((a + b > c) && (a + c > b) && (b + c > a))
	{
		printf("成立\n");
	}
	else
	{
		printf("不成立\n");
	}
	return 0;
}