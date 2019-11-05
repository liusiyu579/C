#define _CRT_SECURE_NO_WARNINGS 1
#include "BinTree.h"
void creatBinTree(BinTree &bt)//先序创建二叉树 
{
	char ch;
	cin >> ch;
	if (ch =='#')
	{
		bt = NULL;
	}
	else 
	{
		bt = new BTNode;
		bt->elem = ch;
		creatBinTree(bt->lchild);
		creatBinTree(bt->rchild);
	}
}
void delTree(BinTree root)//销毁二叉树 
{
	if (root != NULL)
	{
		delTree(root->lchild);
		delTree(root->rchild);
	}
	free(root);
}
void display(BinTree root)//显示树形结构
{
	if (root != NULL)
	{
		cout << root->elem;
		if (root->lchild != NULL || root->rchild != NULL)
		{
			cout << "[";
			display(root->lchild);
		}
		if (root->rchild != NULL)
		{
			cout <<",";
			display(root->rchild);
			cout << "]";
		}
	}
}
void preOrder(BinTree root)//递归前序遍历
{
	if (root != NULL)
	{
		cout << root->elem;
		preOrder(root->lchild);
		preOrder(root->rchild);
	}
}
void inOrder(BinTree root)//递归中序遍历
{
	if (root != NULL)
	{
		inOrder(root->lchild);
		cout << root->elem;
		inOrder(root->rchild);
	}
}
void postOrder(BinTree root)//递归后序遍历
{
	if (root != NULL)
	{
		postOrder(root->lchild);
		postOrder(root->rchild);
		cout << root->elem;
	}
}
int maxDepth(BinTree root)//求二叉树的最大深度
{
	if (root == NULL)
	{
		return 0;
	}
	int leftL= maxDepth(root->lchild);
	int leftR = maxDepth(root->rchild);
	int a = leftL - leftR;
	if (a > 0)
	{
		return leftL + 1;
	}
	else
	{
		return leftR + 1;
	}
}
BinTree parent(BinTree bt, char NodeName)//查询某个节点的父节点
{
	if (bt)
	{
		if (bt->elem == NodeName)
		{
			cout << "该节点为根节点:" << endl;
			return NULL;
		}
	}
	if ((bt->lchild->elem == NodeName&&bt->lchild != NULL) ||
		(bt->rchild->elem == NodeName&&bt->rchild != NULL))
	{
		return bt;
	}
	else
	{
		BTNode*tmp= NULL;
		if (tmp = parent(bt->lchild, NodeName))
		{
			return tmp;
		}
		if (tmp = parent(bt->rchild, NodeName))
		{
			return tmp;
		}
	}
	return NULL;
}
BinTree search(BinTree bt, char NodeName)//查询某个节点
{
	BinTree p;
	if (bt)
	{
		if (bt->elem == NodeName)
		{
			return bt;
		}
		if (bt->lchild)
		{
			p = search(bt->lchild, NodeName);
			if (p)
			{
				return p;
			}
		}
		if (bt->rchild)
		{
			p = search(bt->rchild, NodeName);
			if (p)
			{
				return p;
			}
		}
	}
	return NULL;
}
int Nodes(BinTree bt)//统计二叉树中节点个数
{
	if (bt == NULL)
	{
		return 0;
	}
	else
	{
		return Nodes(bt->lchild) + Nodes(bt->rchild) + 1;
	}
}
void dispLeaf(BinTree bt)//输出二叉树中的所有叶子节点
{
	if (bt != NULL)
	{
		if (bt->lchild == NULL&&bt->rchild == NULL)
		{
			cout << bt->elem << ",";
		}
		dispLeaf(bt->lchild);
		dispLeaf(bt->rchild);
	}
}