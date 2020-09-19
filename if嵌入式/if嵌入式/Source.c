#include <stdio.h>

int main()
{
	int a = 30;
	if (a>=20)
	{
		printf("a>=20");
		if (a<=50)
		{
			printf(" and a<=50");

		}
		else
		{
			printf("a>=50");
		}
		
	}
	else
	{
		printf("a<=20");
	}
	

	return 0;
}