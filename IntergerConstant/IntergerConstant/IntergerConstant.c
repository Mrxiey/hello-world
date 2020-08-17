#include<stdio.h>

int main()
{
	printf("%d\n",45);//The decimal value is 45.

	printf("%#o\n", 071);//The octal value is 071.
	printf("0%o\n", 071);

	printf("ox%x\n",0x45);//The hexadecimal value is ox45.
	printf("%#x\n",0x45);

	printf("%d\n", 0xaf4d);
	printf("%o\n", 0xaf4d);
	printf("%x\n", 0xaf4d);
	return 0;
}