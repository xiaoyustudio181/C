/*Visual Studio 2013����C������Ŀ�Ĳ��裺
�½���Ŀ -> Visual C++ -> Win32����̨Ӧ�ó��� ->
��һ�� -> ��Ӧ�ó������͡�ѡ�񡰿���̨Ӧ�ó��� -> ����ѡ��ѡ�񡰿���Ŀ�� ->
�һ���Ŀ�ļ����еġ�Դ�ļ��� -> ��� -> �½��� -> C++�ļ�(.cpp)
���ֱ���ڡ�Դ.cpp���ļ��༭C���Գ���*/
#include <stdio.h>
int max(int a, int b)
{
	int m;
	if (a > b)m = a;
	else m = b;
	return(m);
}
int sum()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);//����
	printf("%d+%d+%d=%d\n", a, b, c,a+b+c);
}
int main()
{
	//printf("Hello world.\n");
	int a = 1, b = 2;
	printf("%d",a+b);
	int c = max(a, b);
	printf("%d", c);
	getchar();
	getchar();
}
