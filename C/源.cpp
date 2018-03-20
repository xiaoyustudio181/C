/*
C语言的程序构成方式：
１）c语言程序由函数构成，每个函数可以实现一个或多个功能。
２）一个正规程序可以有多个函数，但是有且只有一个主函数。
３）函数只有在被调用的时候才执行，主函数由系统调用执行。
４）函数的格式必须按照规范书写。
５）C 语言程序文件的后缀为 .c

#include 是一个预处理命令，用来引入头文件
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
//所有的 C 语言程序都需要包含 main() 函数。 代码从 main() 函数开始执行。
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

	printf("char 类型数据的存储大小 : %lu \n", sizeof(char));
	printf("int 类型数据的存储大小 : %lu \n", sizeof(int));
	printf("float 类型数据的存储大小 : %lu \n", sizeof(float));
	printf("double 类型数据的存储大小 : %lu \n\n", sizeof(double));

	printf("float 存储最大字节数 : %lu \n", sizeof(float));
	printf("float 最小值: %E\n", FLT_MIN);
	printf("float 最大值: %E\n", FLT_MAX);
	printf("精度值: %d\n", FLT_DIG);

	getchar();
	getchar();
	return 0;//语句用于表示退出程序。
}
