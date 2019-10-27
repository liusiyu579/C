#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "iostream"

struct book{
	int id;
	char title[20];
	char author[20];
	double price;
	char state[20];
	int student_id;
	char student_name[20];
	struct book* next;
};


void Print_Book(struct book *head_book);
struct book *Create_New_Book();/*创建新的图书库*/
struct book *Insert_Book(struct book *head_book, struct book *new_book);/*增加图书，逐个添加*/
//void Insert_Book(struct book *head_book,struct book *new_book);/*增加图书，逐个添加*/
//函数的参数是一个指针时，不要在函数体内部改变指针所指的地址，那样毫无作用，需要修改的只能是指针所指向的内容。即应把指针当作常量
struct book *Search_Book_ById(int id, struct book *head_book);
struct book *Search_Book_ByTitle(char *title, struct book *head_book);
struct book *Search_Book_ByPrice(double price_h, double price_l, struct book *head_book);
//bool Delete_Book(int id,book* head_book);
struct book* Delete_Book(int id, book* head_book);

int main()
{
	struct book* head_book, *p_book;
	int choice, f, id;
	int m = 1;
	char title[20];
	double price_h, price_l, price;
	char author[20];
	int size_book = sizeof(struct book);
	printf("\n欢迎您第一次进入图书管理系统!\n\n");
	printf("----->[向导]----->[新建图书库]\n\n");
	printf("注意:当输入图书编号为0时,进入下一步.\n\n");
	head_book = Create_New_Book();
	system("cls");
	//Print_Book(head_book);
	printf("\n欢迎您第一次进入图书管理系统!\n\n");
	printf("----->[向导]----->[新建会员库]\n\n");
	printf("注意:当输入会员学号为0时,进入主菜单.\n\n");
	system("cls");
	//Print_Student(head_student);
	do{
		printf("=======图书管理系统==========\n");
		printf("************[1]:查询图书*************\n");
		printf("************[2]:添加图书*************\n");
		printf("************[3]:删除图书*************\n"); 
		printf("************[4]:遍历图书***********\n"); 
		printf("========================\n");
		printf("**************0:退出*****************\n");
		printf("************请选择<0~4>:**********\n");
		scanf("%d", &choice);
		switch (choice){
		case 0:
			system("cls");
			printf("\n\t\t\t〓〓〓〓〓图书管理系统〓〓〓〓〓\n\n");
			printf("\n谢谢您的使用!\n\n");
			break;
		case 1:
			system("cls");
			printf("\n\t\t\t〓〓〓〓〓图书管理系统〓〓〓〓〓\n\n");
			printf("1.按编号查询\n\n");
			printf("2.按名称查询\n\n");
			printf("3.按价格区间查询\n\n");
			printf("0.返回主菜单\n\n");
			printf("请选择:");
			scanf("%d", &f);
			if (f == 1){
				printf("请输入查询图书编号:");
				scanf("%d", &id);
				printf("相关信息如下:\n\n");
				head_book = Search_Book_ById(id, head_book);
				break;
			}
			else if (f == 2){
				getchar();
				printf("请输入查询图书名称:");
				gets(title);
				printf("相关信息如下:\n\n");
				head_book = Search_Book_ByTitle(title, head_book);
				break;
			}
			else if (f == 3){
				printf("请输入最高价格:");
				scanf("%lf", &price_h);
				printf("请输入最低价格:");
				scanf("%lf", &price_l);
				printf("相关信息如下:\n\n");
				head_book = Search_Book_ByPrice(price_h, price_l, head_book);
				break;
			}
			else if (f == 0){
				break;
			}
			break;
		case 2:
			system("cls");
			printf("\n\t\t\t〓〓〓〓〓图书管理系统〓〓〓〓〓\n\n");
			printf("请输入图书编号:");
			scanf("%d", &id);
			printf("请输入图书名称:");
			scanf("%s", title);
			printf("请输入作者名字:");
			scanf("%s", author);
			printf("请输入单价:");
			scanf("%lf", &price);
			printf("\n");
			struct book *ptr_b;
			for (ptr_b = head_book; ptr_b; ptr_b = ptr_b->next)
			{
				if (ptr_b->id == id)
				{
					printf("此编号图书已存在\n");
					m = 0;
					break;
				}
			}
			if (m){
				p_book = (struct book *)malloc(size_book);
				strcpy(p_book->title, title);
				p_book->id = id;
				p_book->price = price;
				strcpy(p_book->author, author);
				strcpy(p_book->state, "存在");
				strcpy(p_book->student_name, "待定");
				//	head_book=Insert_Book(head_book,p_book); 
				Insert_Book(head_book, p_book);
				printf("\n添加图书成功!\n\n");
			}
			break;
		case 3:
			system("cls");
			printf("\n\t\t\t〓〓〓〓〓图书管理系统〓〓〓〓〓\n\n");
			printf("输入删除图书编号:\n");
			scanf("%d", &id);
			/*if(Delete_Book(id,head_book)){
			printf("\n删除图书成功!\n\n");
			}else{
			printf("删除失败");
			}*/
			head_book = Delete_Book(id, head_book);
			break;
		case 4:
			system("cls");
			printf("\n\t\t\t〓〓〓〓〓图书管理系统〓〓〓〓〓\n\n");
			Print_Book(head_book);
			break;
		}
	} while (choice != 0);
	return 0;
}

struct book *Create_New_Book(){
	struct book *head_book, *p_book;
	int id, tag;
	double price;
	char title[20], author[20];
	int size_book = sizeof(struct book);

	head_book = NULL;
	printf("请输入图书编号:");
	scanf("%d", &id);
	printf("请输入图书名称:");
	scanf("%s", title);
	printf("请输入作者名字:");
	scanf("%s", author);
	printf("请输入单价:");
	scanf("%lf", &price);
	printf("\n");
	while (true){
		p_book = (struct book *)malloc(size_book);
		strcpy(p_book->title, title);
		p_book->id = id;
		p_book->price = price;
		p_book->student_id = -1;
		strcpy(p_book->author, author);
		strcpy(p_book->state, "存在");
		strcpy(p_book->student_name, "待定");
		head_book = Insert_Book(head_book, p_book);
		printf("是否继续？继续输入1，退出按任意键\n");
		scanf("%d", &tag);
		if (tag != 1){
			break;
		}
		printf("请输入图书编号:");
		scanf("%d", &id);
		printf("请输入图书名称:");
		scanf("%s", title);
		printf("请输入作者名字:");
		scanf("%s", author);
		printf("请输入单价:");
		scanf("%lf", &price);
		printf("\n");
	}
	return head_book;
}

struct book *Insert_Book(struct book *head_book, struct book *new_book){
	struct book *p, *q;

	p = q = head_book;

	if (head_book == NULL){	//单向链表为空的情况
		head_book = new_book;
		new_book->next = NULL;
	}
	else{
		while ((new_book->id>p->id) && (p->next != NULL)){
			q = p;
			p = p->next;
		}
		if (new_book->id <= p->id){
			new_book->next = p;
			if (head_book == p)
				head_book = new_book;
			else
				q->next = new_book;
		}
		else{
			p->next = new_book;
			new_book->next = NULL;
		}
	}
	return head_book;
};

struct book *Search_Book_ById(int id, struct book *head_book){
	struct book *ptr_book = head_book;
	int flag = 0;
	while (ptr_book != NULL)
	{
		if (ptr_book->id == id){
			printf("图书编号:%d\n", ptr_book->id);
			printf("图书名称:%s\n", ptr_book->title);
			printf("图书单价:%.2lf\n", ptr_book->price);
			printf("图书作者:%s\n", ptr_book->author);
			printf("\n");
			flag++;
		}
		if (flag>0)
		{
			break;
		}
		ptr_book = ptr_book->next;
	}
	if (flag == 0){
		printf("暂无此图书信息!\n\n");
	}
	return head_book;
};

struct book *Search_Book_ByTitle(char *title, struct book *head_book){
	struct book *ptr_book = head_book;
	int flag = 0;
	while (ptr_book != NULL)
	{
		if (strcmp(ptr_book->title, title) == 0){
			printf("图书编号:%d\n", ptr_book->id);
			printf("图书名称:%s\n", ptr_book->title);
			printf("图书单价:%.2lf\n", ptr_book->price);
			printf("图书作者:%s\n", ptr_book->author);
			printf("\n");
			flag++;
		}
		if (flag>0)
		{
			break;
		}
		ptr_book = ptr_book->next;
	}
	if (flag == 0){
		printf("暂无此图书信息!\n\n");
	}
	return head_book;
};

struct book *Search_Book_ByPrice(double price_h, double price_l, struct book *head_book){
	struct book *ptr_book = head_book;
	int flag = 0;
	while (ptr_book != NULL)
	{
		if (ptr_book->price >= price_l&&ptr_book->price <= price_h){
			printf("图书编号:%d\n", ptr_book->id);
			printf("图书名称:%s\n", ptr_book->title);
			printf("图书单价:%.2lf\n", ptr_book->price);
			printf("图书作者:%s\n", ptr_book->author);
			printf("\n");
			flag++;
		}
		ptr_book = ptr_book->next;
	}
	if (flag == 0){
		printf("暂无此图书信息!\n\n");
	}
	return head_book;
}

/*bool Delete_Book(int id,book* head_book){
bool flag=true;
struct book *p,*q;
p=q=head_book;
if(p->id==id&&p->next==NULL){
head_book=NULL;
}

while(p->id!=id&&p->next!=NULL){
q=p;
p=p->next;
}
if(p->id==id){
if(p==head_book){
head_book=p->next;
}else{
q->next=p->next;
}
free(p);
}else{
flag=false;
printf("找不到该书");
}
return flag;
};*/

struct book* Delete_Book(int id, book* head_book){
	bool flag = true;
	struct book *p, *q;
	p = q = head_book;

	while (p->id != id&&p->next != NULL){
		q = p;
		p = p->next;
	}
	if (p->id == id){
		if (p == head_book){
			head_book = p->next;
		}
		else{
			q->next = p->next;
		}

		free(p);
		printf("删除成功！\n");
	}
	else{
		flag = false;
		printf("找不到该书");
	}
	return head_book;
};

void Print_Book(struct book *head_book){
	struct book* p = head_book;

	if (p == NULL){
		printf("\n无记录\n\n");
		return;
	}
	printf("\n图书编号\t图书名称\t图书单价\t图书作者\n\n");
	while (p != NULL)
	{
		printf("%d\t\t%s\t\t%.2lf\t\t%s\n\n", p->id, p->title, p->price, p->author);
		p = p->next;
	}
}