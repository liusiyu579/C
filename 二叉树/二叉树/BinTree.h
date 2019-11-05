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
void creatBinTree(BinTree &root);//先序创建二叉树
void delTree(BinTree root);//销毁二叉树
void display(BinTree root);//显示树形结构
void preOrder(BinTree root);//递归前序遍历
void inOrder(BinTree root);//递归中序遍历
void postOrder(BinTree root);//递归后序遍历
int maxDepth(BinTree root);//求二叉树的最大深度
BinTree parent(BinTree bt, char NodeName);//查询某个节点的父节点
BinTree search(BinTree bt, char NodeName);//查询某个节点
int Nodes(BinTree bt);//统计二叉树中节点个数
void dispLeaf(BinTree bt);//输出二叉树中的所有叶子节点


