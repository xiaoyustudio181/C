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
#include "basis.h"
#include "array.h"
#include "pointer.h"
#include "struct.h"
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
int main()//���е� C ���Գ�����Ҫ���� main() ������ ����� main() ������ʼִ�С�
{
	switch (11)
	{
	case 11:
		basis1(); break;
	case 12:
		basis2(); break;
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