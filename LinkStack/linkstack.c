#include"linkstack.h"

void initlinkstack(Linkstack*q)
{
	Node* head = (Node*)malloc(sizeof(Node));
	head->next =NULL;
	q->head  = head;
	q->tail = NULL;
	
}
int empty(Linkstack* q)
{
	if(q->tail==NULL && q->head->next==NULL)
	{
		return 1;
	}
	else 
		return 0;
}
void Pop(Linkstack* q)
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
int Size(Linkstack* q)

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

void Push(Linkstack* q,Datatype x)
{
		
		Node *node = (Node*)malloc(sizeof(Node));
		if(empty(q))
		{
			node->data = x;
			node->next =NULL;
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
void display(Linkstack *q)
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






