#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Please enter 3 numbers.\n");
	scanf_s("%d%d%d", &a, &b, &c);
	if ((a + b > c) && (a + c > b) && (b + c > a))
	{
		printf("����\n");
	}
	else
	{
		printf("������\n");
	}
	return 0;
}