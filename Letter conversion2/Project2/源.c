#include <stdio.h>

int main()
{   char a;
	printf("������һ����ĸ:\n");
	
	scanf_s("%c", &a);
	if (a>=65 && a<=90)
	{
		printf("%c\n", a + 32);
	}
	else if (a>=97 && a<=122)
	{
		printf("%c\n", a - 32);
	}
	else
	{
		printf("pls check you input\n");
	}
	return 0;


}