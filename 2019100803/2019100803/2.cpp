#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdlib.h>
using namespace std;
#define OK 1;
#define ERROR 0;
#define MAXSIZE 100;
typedef char ElemType;
typedef  int Status;
typedef struct StackNode
{
	ElemType data;//
	struct StackNode *next;
}StackNode,*LinkStack;
Status InitStack(LinkStack &S)
{
	S = NULL;
	return OK;
}
int IsEmpty(LinkStack top)
{
	if (top->next == NULL)
	{
		return OK;
	}
	return ERROR;
}
Status Push(LinkStack &S, ElemType e)
{
	StackNode*p;
	p = new StackNode;
	p->data = e;
	p->next = S;
	S = p;
	return OK;
}
Status Pop(LinkStack &S, ElemType  &e)
{
	StackNode*p;
	if (S == NULL)
	{
		return ERROR;
	}
	e = S->data;
	p = S;
	S = S->next;
	delete p;
	return OK;
}
ElemType GetTop(LinkStack S)
{
	if (S != NULL)
	{
		return S->data;
	}
}
int main()
{
	LinkStack s;
	int i;
	ElemType ch;
	InitStack(s);
	for (i = 0; i < 5; i++)
	{
		cin >> ch;
		Push(s, ch);
	}
	GetTop(s);
	cout << "Õ»¶¥ÔªËØÎª£º" << endl;
	cout << GetTop(s) << endl;
	for (i = 0; i < 5; i++)
	{
		Pop(s, ch);
		cout << ch << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}