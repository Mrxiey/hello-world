#include <stdio.h>

int main()
{
	//�����ͳ���
	printf("%f\n",3.14999);//%fĬ��Ϊ6λ��ʮ����С��
	printf("%.2f\n", 3.14999);//������λС��
	printf("%0.3f\n", 3.14999);//����Ϊ0��������λС��
	printf("%5.0f\n", 3.14999);//����Ϊ5��������С��

	printf("%f\n", 3.14999e2);//ָ������ѧ��������3.14999����10��2����
	printf("%f\n", 3.14999e-2);//ָ������ѧ��������3.14999����10��-2����
	
	//�ַ��ͳ���
	printf("%c\n", 'a');
	printf("%d\n",'a');//�ҳ��ַ�a��asciiz���ֵ
	printf("%c\n", '\75');//ͨ����asciiz���Ӧ��ֵ�ҳ����Ӧ���ַ�
	printf("%d\n", '\141');//1��3λ�˽������������ַ�
	printf("%h\n",'x6d');//16�������������ַ�
	printf("\n");
	

    #pragma region ת���ַ���ռһ���ֽڣ�
	/*
	\';������
	\"˫����
	\r�س�
	\t�Ʊ�
	\\��б��
	\a����
	\b�˸�
	\f��ҳ
	\0�ַ�����ֹ��
    \%%�ٷֺ�
	*/
#pragma endregion
	//�ַ����ͳ���
	printf("Hello world");//����Ϊ11���ֽ�Ϊ12
	int a = strlen("Hello");//�����ַ����ĳ���
	printf("Hello���ַ�������Ϊ��%d", a);
	//���ų���
#define CH 'A'
#define Num 2020
#define PI 3.14
	return 0;
}