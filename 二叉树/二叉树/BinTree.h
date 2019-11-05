#pragma once
#include<iostream>
#include<string.h> 
#include<stdlib.h> 
#include<cstdio>
#include<stack>
using namespace std;
#include<stdlib.h>
#define NULL 0

typedef char datatype;
typedef struct node
{
	datatype elem;
	struct node *lchild, *rchild;
}BTNode,*BinTree;
void creatBinTree(BinTree &root);//���򴴽�������
void delTree(BinTree root);//���ٶ�����
void display(BinTree root);//��ʾ���νṹ
void preOrder(BinTree root);//�ݹ�ǰ�����
void inOrder(BinTree root);//�ݹ��������
void postOrder(BinTree root);//�ݹ�������
int maxDepth(BinTree root);//���������������
BinTree parent(BinTree bt, char NodeName);//��ѯĳ���ڵ�ĸ��ڵ�
BinTree search(BinTree bt, char NodeName);//��ѯĳ���ڵ�
int Nodes(BinTree bt);//ͳ�ƶ������нڵ����
void dispLeaf(BinTree bt);//����������е�����Ҷ�ӽڵ�


