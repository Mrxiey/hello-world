#include <stdio.h>

int main()
{   int a = 45, b = 5, c = 0;
    /*
	//Homework:Finding the remainder without suing %
	
	//c = a - a / b * b;///also can be c = a % b;
	printf("The remainder is:%d\n",c);
	//Homework:using & check the var whether a odd or even number
	if((a) & (1)==0)
	{
	printf("%d is an odd number\n");
	}
	else if(a==0)
	{
	printf("Please enter other number instead of 0");
	else
	{
	printf("%d is an even number.\n");
	}
	*/
    

	/*
	//逻辑或有短路	
	//c = (a = 60) || (b = 50);
	//printf("%d %d %d \n",a,b, c);//output of a=60,b=1,c=0
	*/

    /*
	//condition 条件运算符 ? :
	a = 45;
	a < 10 ? //If the condition is allow then will pirnt the message before the : instead print the other part 
	printf("true") : printf("false");

	c = a < 10 ? 3 : 5;
	printf("%d\n",c);
	*/




	/*
	//位运算符
	//计算机通过计算补码，再将结果为补码转换成原码返回。
	//& 按位与
	a = 5, b = 4;//正数三码相同 5(原，反，补)=0101,4(原，反，补)=0100 output by using & is 0100 都有1为1 无则为0
	c = a & b;//the out put is 4
	printf("%d\n", c);
	c = -a & b;//-5(原)=1101,4(原)=0100 到 -5(补)=(反)1010+1=1011,4=0100,output = 0000 =0
	printf("%d\n", c);
	*/

	/*
	//|按位或
	a=5,b=4;
	c = -a| b;
	//-a(原)=1101,-a(反)=1010,-a(补)=1011,b(原)=0100,out put by using | = (补)1111 convert to (原) 先反，再+1
	printf("%d\n", c);//output = 1000 +1 =1001=-1
	*/

    /*
	//～按位取反
    a = 5;//a=0101
	a = ~a;//~a=1010为补码,反=1101,原=1110
	printf("a=%d", a);//a=-2
	*/

    /*
	//复合运算符(+= -= *= /=)
	a = 45, b = 10, c = 0;
	c = (a + b,b+c,a+c);
	printf("c=%d\n",c);//output is 45
	*/

	/*
	//size of 
	//不是函数，是一个运算符，只求内存大小，不赋值
	int e = 10;
	sizeof(e=e+1);
	printf("%d", e);
	*/
	return 0;
}