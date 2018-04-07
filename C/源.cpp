/*C语言的程序构成方式：
１）C语言程序由函数构成，每个函数可以实现一个或多个功能。
２）一个正规程序可以有多个函数，但是有且只有一个主函数。
３）函数只有在被调用的时候才执行，主函数由系统调用执行。
４）函数的格式必须按照规范书写。
５）C 语言程序文件的后缀为 .c

#include 是一个预处理命令，用来引入头文件
stdio: standard input and output */
#include <stdio.h>
#include <float.h>
#include "basis1.h"
#define CONST1 1.2345//常量

int main()//所有的 C 语言程序都需要包含 main() 函数。 代码从 main() 函数开始执行。
{
	printf("This is a C program.\n");
	//first_c_program();
	//var_types();
	const float CONST2 = 2.3456;
	printf("CONST1=%f \n", CONST1);
	printf("CONST2=%f", CONST2);
	getchar();
	getchar();
	return 0;//语句用于表示退出程序。
}
