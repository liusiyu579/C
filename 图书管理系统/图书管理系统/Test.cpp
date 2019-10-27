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
struct book *Create_New_Book();/*�����µ�ͼ���*/
struct book *Insert_Book(struct book *head_book, struct book *new_book);/*����ͼ�飬������*/
//void Insert_Book(struct book *head_book,struct book *new_book);/*����ͼ�飬������*/
//�����Ĳ�����һ��ָ��ʱ����Ҫ�ں������ڲ��ı�ָ����ָ�ĵ�ַ�������������ã���Ҫ�޸ĵ�ֻ����ָ����ָ������ݡ���Ӧ��ָ�뵱������
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
	printf("\n��ӭ����һ�ν���ͼ�����ϵͳ!\n\n");
	printf("----->[��]----->[�½�ͼ���]\n\n");
	printf("ע��:������ͼ����Ϊ0ʱ,������һ��.\n\n");
	head_book = Create_New_Book();
	system("cls");
	//Print_Book(head_book);
	printf("\n��ӭ����һ�ν���ͼ�����ϵͳ!\n\n");
	printf("----->[��]----->[�½���Ա��]\n\n");
	printf("ע��:�������Աѧ��Ϊ0ʱ,�������˵�.\n\n");
	system("cls");
	//Print_Student(head_student);
	do{
		printf("=======ͼ�����ϵͳ==========\n");
		printf("************[1]:��ѯͼ��*************\n");
		printf("************[2]:���ͼ��*************\n");
		printf("************[3]:ɾ��ͼ��*************\n"); 
		printf("************[4]:����ͼ��***********\n"); 
		printf("========================\n");
		printf("**************0:�˳�*****************\n");
		printf("************��ѡ��<0~4>:**********\n");
		scanf("%d", &choice);
		switch (choice){
		case 0:
			system("cls");
			printf("\n\t\t\t����������ͼ�����ϵͳ����������\n\n");
			printf("\nлл����ʹ��!\n\n");
			break;
		case 1:
			system("cls");
			printf("\n\t\t\t����������ͼ�����ϵͳ����������\n\n");
			printf("1.����Ų�ѯ\n\n");
			printf("2.�����Ʋ�ѯ\n\n");
			printf("3.���۸������ѯ\n\n");
			printf("0.�������˵�\n\n");
			printf("��ѡ��:");
			scanf("%d", &f);
			if (f == 1){
				printf("�������ѯͼ����:");
				scanf("%d", &id);
				printf("�����Ϣ����:\n\n");
				head_book = Search_Book_ById(id, head_book);
				break;
			}
			else if (f == 2){
				getchar();
				printf("�������ѯͼ������:");
				gets(title);
				printf("�����Ϣ����:\n\n");
				head_book = Search_Book_ByTitle(title, head_book);
				break;
			}
			else if (f == 3){
				printf("��������߼۸�:");
				scanf("%lf", &price_h);
				printf("��������ͼ۸�:");
				scanf("%lf", &price_l);
				printf("�����Ϣ����:\n\n");
				head_book = Search_Book_ByPrice(price_h, price_l, head_book);
				break;
			}
			else if (f == 0){
				break;
			}
			break;
		case 2:
			system("cls");
			printf("\n\t\t\t����������ͼ�����ϵͳ����������\n\n");
			printf("������ͼ����:");
			scanf("%d", &id);
			printf("������ͼ������:");
			scanf("%s", title);
			printf("��������������:");
			scanf("%s", author);
			printf("�����뵥��:");
			scanf("%lf", &price);
			printf("\n");
			struct book *ptr_b;
			for (ptr_b = head_book; ptr_b; ptr_b = ptr_b->next)
			{
				if (ptr_b->id == id)
				{
					printf("�˱��ͼ���Ѵ���\n");
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
				strcpy(p_book->state, "����");
				strcpy(p_book->student_name, "����");
				//	head_book=Insert_Book(head_book,p_book); 
				Insert_Book(head_book, p_book);
				printf("\n���ͼ��ɹ�!\n\n");
			}
			break;
		case 3:
			system("cls");
			printf("\n\t\t\t����������ͼ�����ϵͳ����������\n\n");
			printf("����ɾ��ͼ����:\n");
			scanf("%d", &id);
			/*if(Delete_Book(id,head_book)){
			printf("\nɾ��ͼ��ɹ�!\n\n");
			}else{
			printf("ɾ��ʧ��");
			}*/
			head_book = Delete_Book(id, head_book);
			break;
		case 4:
			system("cls");
			printf("\n\t\t\t����������ͼ�����ϵͳ����������\n\n");
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
	printf("������ͼ����:");
	scanf("%d", &id);
	printf("������ͼ������:");
	scanf("%s", title);
	printf("��������������:");
	scanf("%s", author);
	printf("�����뵥��:");
	scanf("%lf", &price);
	printf("\n");
	while (true){
		p_book = (struct book *)malloc(size_book);
		strcpy(p_book->title, title);
		p_book->id = id;
		p_book->price = price;
		p_book->student_id = -1;
		strcpy(p_book->author, author);
		strcpy(p_book->state, "����");
		strcpy(p_book->student_name, "����");
		head_book = Insert_Book(head_book, p_book);
		printf("�Ƿ��������������1���˳��������\n");
		scanf("%d", &tag);
		if (tag != 1){
			break;
		}
		printf("������ͼ����:");
		scanf("%d", &id);
		printf("������ͼ������:");
		scanf("%s", title);
		printf("��������������:");
		scanf("%s", author);
		printf("�����뵥��:");
		scanf("%lf", &price);
		printf("\n");
	}
	return head_book;
}

struct book *Insert_Book(struct book *head_book, struct book *new_book){
	struct book *p, *q;

	p = q = head_book;

	if (head_book == NULL){	//��������Ϊ�յ����
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
			printf("ͼ����:%d\n", ptr_book->id);
			printf("ͼ������:%s\n", ptr_book->title);
			printf("ͼ�鵥��:%.2lf\n", ptr_book->price);
			printf("ͼ������:%s\n", ptr_book->author);
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
		printf("���޴�ͼ����Ϣ!\n\n");
	}
	return head_book;
};

struct book *Search_Book_ByTitle(char *title, struct book *head_book){
	struct book *ptr_book = head_book;
	int flag = 0;
	while (ptr_book != NULL)
	{
		if (strcmp(ptr_book->title, title) == 0){
			printf("ͼ����:%d\n", ptr_book->id);
			printf("ͼ������:%s\n", ptr_book->title);
			printf("ͼ�鵥��:%.2lf\n", ptr_book->price);
			printf("ͼ������:%s\n", ptr_book->author);
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
		printf("���޴�ͼ����Ϣ!\n\n");
	}
	return head_book;
};

struct book *Search_Book_ByPrice(double price_h, double price_l, struct book *head_book){
	struct book *ptr_book = head_book;
	int flag = 0;
	while (ptr_book != NULL)
	{
		if (ptr_book->price >= price_l&&ptr_book->price <= price_h){
			printf("ͼ����:%d\n", ptr_book->id);
			printf("ͼ������:%s\n", ptr_book->title);
			printf("ͼ�鵥��:%.2lf\n", ptr_book->price);
			printf("ͼ������:%s\n", ptr_book->author);
			printf("\n");
			flag++;
		}
		ptr_book = ptr_book->next;
	}
	if (flag == 0){
		printf("���޴�ͼ����Ϣ!\n\n");
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
printf("�Ҳ�������");
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
		printf("ɾ���ɹ���\n");
	}
	else{
		flag = false;
		printf("�Ҳ�������");
	}
	return head_book;
};

void Print_Book(struct book *head_book){
	struct book* p = head_book;

	if (p == NULL){
		printf("\n�޼�¼\n\n");
		return;
	}
	printf("\nͼ����\tͼ������\tͼ�鵥��\tͼ������\n\n");
	while (p != NULL)
	{
		printf("%d\t\t%s\t\t%.2lf\t\t%s\n\n", p->id, p->title, p->price, p->author);
		p = p->next;
	}
}