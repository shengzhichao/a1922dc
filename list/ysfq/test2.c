#include<stdio.h>
#include<stdlib.h>
typedef struct node_
{
	int i;
	struct node_ *next;
}Node;

typedef struct list_
{
	Node *head;
	Node *current;
}List;

void Initlist(List*);                 //初始化链表
void addnode(List*,int);               //创建循环链表i
void display(List*,int);
void find(List*,int);


void Initlist(List*list)                  
{
	list->head = NULL;
	list->current = NULL;
	
}
void addnode(List*list,int n)                       
{
	
       	Node *head = (Node*)malloc(sizeof(Node));
	head->i = 1;
	list->head = head;	
	list->current = head;	
	Node *node;
	for(int num = 2;num<=n;num++)
	{
			
		node = (Node*)malloc(sizeof(Node));
		node->i = num;
		list->current->next = node;
		list->current = node;
	}
	list->current->next = list->head;
}
void find(List*list,int m)
{
	Node *q = list->head;
	for(int k = 1;k<m-1;k++)
	{
		q=q->next;
		q->next = q->next->next;

	}	
}
void display(List*list,int n)
{
	Node* node = list->head;
	int i = 1;
	while(i<n)
	{
		printf("第%d个为%d\n",i,node->i);
		node = node->next;
		i++;
	}
	if(i==n)
	{
		printf("第%d个为%d\n",i,node->i);
	}
}
int main()
{
	int m,n,k;
	scanf("请输入人数n:%d",&n);
	scanf("请输入m:%d",&m);
	List *list = (List*)malloc(sizeof(List));
	Initlist(list);
	addnode(list,n);
	display(list,n);


}

