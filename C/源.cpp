/*
C���Եĳ��򹹳ɷ�ʽ��
����c���Գ����ɺ������ɣ�ÿ����������ʵ��һ���������ܡ�
����һ�������������ж����������������ֻ��һ����������
��������ֻ���ڱ����õ�ʱ���ִ�У���������ϵͳ����ִ�С�
���������ĸ�ʽ���밴�չ淶��д��
����C ���Գ����ļ��ĺ�׺Ϊ .c

#include ��һ��Ԥ���������������ͷ�ļ�
stdio: standard input and output */
#include <stdio.h>
#include <float.h>
//==========================================================
int max(int a, int b)
{
	int m;
	if (a > b)m = a; else m = b;
	return m;
}
//==========================================================
int sum(int a,int b)
{
	return a + b;
}
//==========================================================
//���е� C ���Գ�����Ҫ���� main() ������ ����� main() ������ʼִ�С�
int main()
{
	/*printf("Hello world.\n");
	int a = 1, b = 2;
	printf("a=%d,b=%d \n", a, b);
	printf("a+b=%d \n",a + b);
	int c = max(a, b);
	printf("max(a,b)=%d \n", c);*/

	/*int d, e;
	scanf("%d%d",&d,&e);
	printf("d=%d,e=%d \n", d, e);*/

	printf("char �������ݵĴ洢��С : %lu \n", sizeof(char));
	printf("int �������ݵĴ洢��С : %lu \n", sizeof(int));
	printf("float �������ݵĴ洢��С : %lu \n", sizeof(float));
	printf("double �������ݵĴ洢��С : %lu \n\n", sizeof(double));

	printf("float �洢����ֽ��� : %lu \n", sizeof(float));
	printf("float ��Сֵ: %E\n", FLT_MIN);
	printf("float ���ֵ: %E\n", FLT_MAX);
	printf("����ֵ: %d\n", FLT_DIG);

	getchar();
	getchar();
	return 0;//������ڱ�ʾ�˳�����
}
