#include <stdio.h>

int main()
{
	printf("��������������\n");
	int a;
	int b;
	scanf_s("%d%d", &a,& b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("ת��֮���a=%d,b=%d\n", a, b);

	/*a = a * b;
	b = a / b;
	a = a / b;
	printf("ת��֮���a=%d,b=%d", a, b);*/
	return 0;
}