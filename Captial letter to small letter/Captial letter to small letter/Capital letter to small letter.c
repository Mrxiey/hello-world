#include <stdio.h>

int main()

{
	char ch;	
	printf("������һ����ĸ:\n");
	scanf_s("%c", &ch);///&ȡ��ֵ
	//�жϴ�Сд
	if (ch <=65 && ch>=90)//��д
	{
		printf("%c\n", ch + 32);
	}
	else if (ch <= 97 && ch >= 122)//Сд
	{
		printf("%c\n", ch - 32);
	}
	else//ɶ������
	{
		printf("������Ĳ�����ĸ�����������룡");
	}
		return 0;
}
	

	
	
