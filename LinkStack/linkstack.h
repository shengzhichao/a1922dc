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
}Linkstack;


void initlinkstack(Linkstack*);

int empty(Linkstack*);

void Pop(Linkstack*);

int Size(Linkstack*);

void Push(Linkstack*,Datatype);

void display(Linkstack *);

#endif
