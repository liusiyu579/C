#define _CRT_SECURE_NO_WARNINGS 1
#include"BinTree.h"

int main()
{
	BinTree root=NULL ;
	creatBinTree(root);
	cout << "输出此二叉树：" << endl;
	display(root);
	cout << endl;
	cout << "先序排列为：";
	preOrder(root);
	cout << endl;
	cout << "中序排列为：";
	inOrder(root);
	cout << endl;
	cout << "后序排列为：";
	postOrder(root);
	cout << endl;
	int num = maxDepth(root);
	cout << "该二叉树的深度为：" <<num<< endl;
	BinTree bin;
	char name;
	cout << "输入要查找的节点名：";
	cin >> name;
	bin = parent(root, name);
	if (bin){
		cout << name << "父节点名为：" << bin ->elem << endl;
	}
	bin = search(root, name);
	if (bin->lchild) {
		cout << name << "的左孩子为：" << bin->lchild->elem << endl;
	}
	else
	{
		cout << name << "无左孩子" <<endl;
	}
	if (bin->rchild) {
		cout << name << "的右孩子为：" << bin->rchild->elem << endl;
	}
	else
	{
		cout << name << "无右孩子" << endl;
	}
	cout << "此二叉树的节点数为：" ;
	cout << Nodes(root) << endl;
	cout << "输出所有的叶子节点：";
	dispLeaf(root) ;
	system("pause");
	return 0;
}