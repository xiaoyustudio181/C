/*Visual Studio 2013创建C语言项目的步骤：
新建项目 -> Visual C++ -> Win32控制台应用程序 ->
下一步 -> “应用程序类型”选择“控制台应用程序” -> 附加选项选择“空项目” ->
右击项目文件夹中的“源文件” -> 添加 -> 新建项 -> C++文件(.cpp)
最后直接在“源.cpp”文件编辑C语言程序。*/
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
	scanf("%d%d%d", &a, &b, &c);//输入
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
