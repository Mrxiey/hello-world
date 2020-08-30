#include <stdio.h>

int main()
{
	char ch;
	printf("ch占用字节：%d\n", sizeof(ch));
	unsigned char ch1 = 256;
	printf("ch1=%d\n", ch1);
	signed char chi1 = -129;
	printf("chi1=%d\n", ch1);
	signed char chi2 = 127+10;
	printf("chi2=%d\n", chi2);
	short s = 45;
	printf("short占用字节：%d\n", sizeof(s));
	unsigned short
}