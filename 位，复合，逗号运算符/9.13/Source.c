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
	//�߼����ж�·	
	//c = (a = 60) || (b = 50);
	//printf("%d %d %d \n",a,b, c);//output of a=60,b=1,c=0
	*/

    /*
	//condition ��������� ? :
	a = 45;
	a < 10 ? //If the condition is allow then will pirnt the message before the : instead print the other part 
	printf("true") : printf("false");

	c = a < 10 ? 3 : 5;
	printf("%d\n",c);
	*/




	/*
	//λ�����
	//�����ͨ�����㲹�룬�ٽ����Ϊ����ת����ԭ�뷵�ء�
	//& ��λ��
	a = 5, b = 4;//����������ͬ 5(ԭ��������)=0101,4(ԭ��������)=0100 output by using & is 0100 ����1Ϊ1 ����Ϊ0
	c = a & b;//the out put is 4
	printf("%d\n", c);
	c = -a & b;//-5(ԭ)=1101,4(ԭ)=0100 �� -5(��)=(��)1010+1=1011,4=0100,output = 0000 =0
	printf("%d\n", c);
	*/

	/*
	//|��λ��
	a=5,b=4;
	c = -a| b;
	//-a(ԭ)=1101,-a(��)=1010,-a(��)=1011,b(ԭ)=0100,out put by using | = (��)1111 convert to (ԭ) �ȷ�����+1
	printf("%d\n", c);//output = 1000 +1 =1001=-1
	*/

    /*
	//����λȡ��
    a = 5;//a=0101
	a = ~a;//~a=1010Ϊ����,��=1101,ԭ=1110
	printf("a=%d", a);//a=-2
	*/

    /*
	//���������(+= -= *= /=)
	a = 45, b = 10, c = 0;
	c = (a + b,b+c,a+c);
	printf("c=%d\n",c);//output is 45
	*/

	/*
	//size of 
	//���Ǻ�������һ���������ֻ���ڴ��С������ֵ
	int e = 10;
	sizeof(e=e+1);
	printf("%d", e);
	*/
	return 0;
}