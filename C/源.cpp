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
#include <string.h>
#include <malloc.h>
#include "basis.h"
#include "array.h"
#include "pointer.h"
#include "struct.h"
//Visual Studio代码格式化热键：Ctrl+K+F
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
int main()//所有的 C 语言程序都需要包含 main() 函数。 代码从 main() 函数开始执行。
{
	switch (15)
	{
	case 11:
		variables(); break;
	case 12:
		scanf1(); break;
	case 13:
		putchar_getchar(); break;
	case 14:
		puts_gets(); break;
	case 15:
		str(); break;
//数组
	case 31:
		array1(); break;
//结构
	case 51:
		struct1(); break;
//指针
	case 71:
		pointer1(); break;
	case 72:
		pointer2(); break;
	case 73:
		pointer3(); break;
	case 74:
		pointer4(); break;
	case 75:
		pointer5(); break;
	default:break;
	}
	getchar();
	return 0;//语句用于表示退出程序。
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++