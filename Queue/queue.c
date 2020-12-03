#include"queue.h"

Linkqueue* initqueue(Linkqueue*q)
{
	Node* head = (Node*)malloc(sizeof(Node));
	head->next =NULL;
	q->head  = head;
	q->tail = NULL;
	
}
int empty(Linkqueue* q)
{
	if(q->tail==NULL && q->head->next==NULL)
	{
		return 1;
	}
	else 
		return 0;
}
void push_back(Linkqueue* q,Datatype x)
{
	
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = x;
	node->next = NULL;
	if(empty(q))
	{
		q->head->next  = node;
		q->tail = node;	
	}
	else
	{	q->tail->next  = node;
		q->tail = node;
	}
	
}
void pop_head(Linkqueue* q)
{
	if(empty(q))
	{
		printf("该队列为空，出队失败!");
		exit(-1);
	}
	else
	{
		q->head->next = q->head->next->next;
	}
}
Datatype front(Linkqueue* q)
{
	Datatype x = q->head->next->data;
	return x;	
	
}
Datatype back(Linkqueue* q)
{
	Datatype x = q->tail->data;
	return x;
}
int Size(Linkqueue* q)

{
	if(empty(q))
	return 0;
	else
	{
		int i=1;
		Node* node = q->head->next;
	while(node!=q->tail)
		{
			i++;
			node = node->next;
			
		}
		return i;
	}
}

void push_head(Linkqueue* q,Datatype x)
{
		
		Node *node = (Node*)malloc(sizeof(Node));
		if(empty(q))
		{
			node->data = x;
			node->next = NULL;
			q->head->next = node;
			q->tail = node;
		}
		else
		{
			node->data = x;
			node->next = NULL;
			node->next = q->head->next;
			q->head->next = node;	
		}
}
void pop_back(Linkqueue* q)
{
	Node *node = q->head;
	if(Size(q) == 1)
		{
			q->head->next = NULL;
			q->tail = NULL;
			return;
        }
	while(Size(q) && node->next->next!=NULL)
		{
			node = node->next;
		}
		node->next =NULL;
		q->tail = node;
}
void display(Linkqueue *q)
{
		if(empty(q))
		{
				return;
		}
		else
		{
				int i = 1;
				Node *node = q->head->next;
				printf("第%d个元素是%d\n",i,node->data);
				while(node!=q->tail)
				{
						node = node->next;		
						i++;
		    		printf("第%d个元素是%d\n",i,node->data);
				}
		}
}






