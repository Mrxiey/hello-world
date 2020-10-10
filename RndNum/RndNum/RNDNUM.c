#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int a;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 20; i++)
	{
		a = rand() % 999 + 1;
		printf("%d ", a);
	}
	return 0;
}