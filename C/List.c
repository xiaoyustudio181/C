#include <stdio.h>
#include <malloc.h>
#define ElemType int
#define Status int
//Ctrl+F5 �ǵ������У�����ǰ�ų���Դ.cpp��
typedef struct LNode {
	ElemType data;
	struct LNode * next;
} LNode, *LinkList;//�˴���˼�ǣ��������ߵȼ�
//LinkList a;
//LNode* b;

Status GetElem(LinkList list, int i, ElemType* e)
{
	int j = 0;
	LNode* cur = list;
	while (cur != NULL) {
		if (j == i) {
			*e = cur->data;
			return 0;
		}
		j++;
		cur = cur->next;
	}
	return -1;
}

int main()
{
	LNode* list = (LNode*)malloc(sizeof(LNode));
	list->data = 1;
	list->next = NULL;

	LNode* list2 = (LNode*)malloc(sizeof(LNode));
	list2->data = 2;
	list2->next = list;

	ElemType e;
	if (GetElem(list2, 0, &e) == 0) {
		printf("OK, %d\n", e);
	}
	else {
		printf("Error\n");
	}
}

