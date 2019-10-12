#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdlib.h>
//
using namespace std;
#define MAXSIZE 100
typedef int Status;
#define OK 1;
#define ERROR 0;
typedef char ElemType;
typedef struct
{
	ElemType*top;
	ElemType*base;
	int stacksize;
}Sqstack;
Status InitStack(Sqstack &S)
{
	S.base = new ElemType[MAXSIZE];
	if (!S.base) exit(OVERFLOW);
	S.top = S.base;
	S.stacksize = MAXSIZE;
	return OK;
}
int StackEmpty(Sqstack S)
{
	if (S.top == S.base)
	{
		return OK;
	}
	else
	{
		return ERROR;
	}
}
Status Push(Sqstack &S, ElemType e)
{
	if (S.top - S.base == S.stacksize)
	{
		return ERROR;
	}
	*S.top++ = e;
	return OK;
}
Status Pop(Sqstack &S, ElemType &e)
{
	if (S.top==S.base)
	{
		return ERROR;
	}
	e = *(--S.top);
	return OK;
}
ElemType GetTop(Sqstack S)
{
	if (S.top != S.base)
	{
		return *(S.top - 1);
	}
}
int main()
{
	Sqstack sq;
	int i = 0;
	InitStack(sq);
	ElemType elem;
	for (i = 0; i < 5; i++)
	{
		cin >> elem;
		Push(sq, elem);
	}
	cout << "Õ»¶¥ÔªËØÎª£º";
	cout << GetTop(sq) << endl;
	for (i = 0; i < 5; i++)
	{
		Pop(sq, elem);
		cout << elem << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}