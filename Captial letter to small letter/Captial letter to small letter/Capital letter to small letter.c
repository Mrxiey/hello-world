#include <stdio.h>

int main()

{
	char ch;	
	printf("请输入一个字母:\n");
	scanf_s("%c", &ch);///&取地值
	//判断大小写
	if (ch <=65 && ch>=90)//大写
	{
		printf("%c\n", ch + 32);
	}
	else if (ch <= 97 && ch >= 122)//小写
	{
		printf("%c\n", ch - 32);
	}
	else//啥都不是
	{
		printf("你输入的不是字母，请重新输入！");
	}
		return 0;
}
	

	
	
