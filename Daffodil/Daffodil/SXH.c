#include <stdio.h>

int main()
{
	int G, S, B, num;
	for (num = 100; num < 1000; num++)
	{
		S = num / 10 % 10;
		G = num % 10;
		B = num / 100;
		if (S * S * S + G * G * G + B * B * B == num)
		{
			printf("%d is a daffoldil number.\n",num);
		}
	}
	return 0;
}