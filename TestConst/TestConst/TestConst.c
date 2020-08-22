#include <stdio.h>

int main()
{
	//浮点型常量
	printf("%f\n",3.14999);//%f默认为6位，十进制小数
	printf("%.2f\n", 3.14999);//保留两位小数
	printf("%0.3f\n", 3.14999);//宽度为0，保留三位小数
	printf("%5.0f\n", 3.14999);//宽度为5，不保留小数

	printf("%f\n", 3.14999e2);//指数（科学计数法）3.14999乘以10的2次幂
	printf("%f\n", 3.14999e-2);//指数（科学计数法）3.14999乘以10的-2次幂
	
	//字符型常量
	printf("%c\n", 'a');
	printf("%d\n",'a');//找出字符a在asciiz里的值
	printf("%c\n", '\75');//通过在asciiz相对应的值找出相对应的字符
	printf("%d\n", '\141');//1～3位八进制所代表的字符
	printf("%h\n",'x6d');//16进制所代表的字符
	printf("\n");
	

    #pragma region 转义字符（占一个字节）
	/*
	\';单引号
	\"双引号
	\r回车
	\t制表
	\\反斜杠
	\a响铃
	\b退格
	\f换页
	\0字符串终止符
    \%%百分号
	*/
#pragma endregion
	//字符串型常量
	printf("Hello world");//长度为11，字节为12
	int a = strlen("Hello");//衡量字符串的长度
	printf("Hello的字符串长度为：%d", a);
	//符号常量
#define CH 'A'
#define Num 2020
#define PI 3.14
	return 0;
}