#include <stdio.h>
#include <stdlib.h>
typedef int Datatype;

typedef struct node_{
	Datatype data;
	struct node_*next;
}Node;


typedef struct list_{
	Node*head;
	Node*tail;
	Node*current;
}List;

void Initlist(List*);             //初始化链表
int Isempty(List*);             //判断链表是否为空
Node* Get(List*,int);            //获取链表第i个结点
void addhead(List*,Datatype);   //头插法
void addtail(List*,Datatype);    //尾插法
void Insert(List*,int,Datatype);  //在第i个结点前面插入结点
Datatype Delete(List*,int);  //  删除第i个结点
void Display(List*);    //  遍历链表
void Clear(List*);    //清空链表

void Initlist(List*list)
{
	list->head =NULL;
	list->tail =NULL;
	list->current =NULL;
	
}
int Isempty(List *list)
{
	if(list->head == NULL && list->tail == NULL)
		return 1;
	else 
		return 0;
}
Node* Get(List *list,int i) 
{	
	
	if(Isempty(list)&&i<=0)
		exit(1);
	int x = 1;
	Node*node;
	node = list->head;
	if(i == 1)
		return node;
	while(x<i)
	{
		x++;
		node = node->next;
	}
	return node;
}

void Insert(List*list,int i,Datatype x)
{
	if(Isempty(list)&&i>0)                     //当链表为空并且插入的结点大于1时不符合
		exit(1);
	if(i<1) exit(1);
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = x;
	node->next = NULL;
	if(i==1)
	{node->next = list->head;
	 list->head = node;
	}
	if(i>1)
	{
		Node*prev = Get(list,i-1);
		node->next = prev->next;
		prev->next = node;
			
	}
}
Datatype Delete(List*list,int i)
{
	
	int x;
	if(Isempty(list))           //空链表不可删除结点
		exit(1);
	if(i==1)
		list->head = list->head->next;
	else
	{
		Node *node = Get(list,i-1);
		x = node->next->data;	
		node->next=node->next->next;
		return x;
	}

}
void Clear(List*list)
{
	Node *p = list->head;
	Node *x = list->head->next;
	while(!Isempty(list))
	{
		free(p);
		p = x->next;
		free(x);
		x = p->next;
	}
}
void Display(List*list)
{
	Node*node;
	node = list->head;
	int num = 1;
	while(node != NULL)
	{

		printf("第%d个元素是%d\n",num,node->data);
		node = node->next;
		num++;
	}

}
void addhead(List*list,Datatype x)
{
	Node *node = (Node*)malloc(sizeof(Node));
	node->data = x;
	node->next = NULL;
	if(Isempty(list))
	{
		list->tail = node;
		list->head = node;
	}
	else
	{
		node->next = list->head;
		list->head = node;
	}

}
void addtail(List*list,Datatype x)
{	
	Node*node = (Node*)malloc(sizeof(Node));
	node->data = x;
	node->next = NULL;
	if(Isempty(list))
	{
		list->tail = node;
		list->head = node;
	}
	else
	{
		list->tail->next = node;
		list->tail = node;
	}
}


int main(int argc,char**argv)
{
	int x;
	List *list = (List*)malloc(sizeof(List));
	
	Initlist(list);
	addhead(list,15);
	addhead(list,56);
	addtail(list,89);
	Delete(list,2);
	Insert(list,2,49);
	Display(list);
	return 0;
}
