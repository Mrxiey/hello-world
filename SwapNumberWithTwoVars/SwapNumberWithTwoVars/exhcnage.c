#include <stdio.h>

int main()
{
	printf("请输入两个整形\n");
	int a;
	int b;
	scanf_s("%d%d", &a,& b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("转换之后的a=%d,b=%d\n", a, b);

	/*a = a * b;
	b = a / b;
	a = a / b;
	printf("转换之后的a=%d,b=%d", a, b);*/
	return 0;
}