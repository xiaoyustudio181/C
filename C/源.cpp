/*C���Եĳ��򹹳ɷ�ʽ��
����C���Գ����ɺ������ɣ�ÿ����������ʵ��һ���������ܡ�
����һ�������������ж����������������ֻ��һ����������
��������ֻ���ڱ����õ�ʱ���ִ�У���������ϵͳ����ִ�С�
���������ĸ�ʽ���밴�չ淶��д��
����C ���Գ����ļ��ĺ�׺Ϊ .c

#include ��һ��Ԥ���������������ͷ�ļ�
stdio: standard input and output */
#include <stdio.h>
#include <float.h>
#include <string.h>
#include <malloc.h>
#include "basis.h"
#include "array.h"
#include "pointer.h"
#include "struct.h"
//Visual Studio�����ʽ���ȼ���Ctrl+K+F
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
int main()//���е� C ���Գ�����Ҫ���� main() ������ ����� main() ������ʼִ�С�
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
//����
	case 31:
		array1(); break;
//�ṹ
	case 51:
		struct1(); break;
//ָ��
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
	return 0;//������ڱ�ʾ�˳�����
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++