#ifndef QUEUE_H
#define QUEUE_H

#include<stdio.h>
#include<stdlib.h>
typedef int Datatype;
typedef struct node_
{
	Datatype data;
	struct node_ *next;
}Node;

typedef struct list_
{
	Node *head;
	Node *tail;
}Linkqueue;


Linkqueue* initqueue(Linkqueue*);
int empty(Linkqueue*);
void push_back(Linkqueue*,Datatype);
void pop_head(Linkqueue*);
Datatype front(Linkqueue*);
Datatype back(Linkqueue*);
int Size(Linkqueue*);
void push_head(Linkqueue*,Datatype);
void pop_back(Linkqueue*);
void display(Linkqueue *q);
#endif
