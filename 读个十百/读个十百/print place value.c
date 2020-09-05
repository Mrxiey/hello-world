#include <stdio.h>

int main()
{
	printf("Please enter a three digit number\n");
	int num;
	scanf_s("%d", &num);
	printf("Hundreds:\n",num/100);//print the hundreds number4
	printf("Tens:\n", num % 100 / 10);//print the tens number
	printf("Ones:\n",num % 10);//print the ones number
	return 0;

}