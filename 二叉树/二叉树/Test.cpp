#define _CRT_SECURE_NO_WARNINGS 1
#include"BinTree.h"

int main()
{
	BinTree root=NULL ;
	creatBinTree(root);
	cout << "����˶�������" << endl;
	display(root);
	cout << endl;
	cout << "��������Ϊ��";
	preOrder(root);
	cout << endl;
	cout << "��������Ϊ��";
	inOrder(root);
	cout << endl;
	cout << "��������Ϊ��";
	postOrder(root);
	cout << endl;
	int num = maxDepth(root);
	cout << "�ö����������Ϊ��" <<num<< endl;
	BinTree bin;
	char name;
	cout << "����Ҫ���ҵĽڵ�����";
	cin >> name;
	bin = parent(root, name);
	if (bin){
		cout << name << "���ڵ���Ϊ��" << bin ->elem << endl;
	}
	bin = search(root, name);
	if (bin->lchild) {
		cout << name << "������Ϊ��" << bin->lchild->elem << endl;
	}
	else
	{
		cout << name << "������" <<endl;
	}
	if (bin->rchild) {
		cout << name << "���Һ���Ϊ��" << bin->rchild->elem << endl;
	}
	else
	{
		cout << name << "���Һ���" << endl;
	}
	cout << "�˶������Ľڵ���Ϊ��" ;
	cout << Nodes(root) << endl;
	cout << "������е�Ҷ�ӽڵ㣺";
	dispLeaf(root) ;
	system("pause");
	return 0;
}