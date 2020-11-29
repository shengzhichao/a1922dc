#ifndef _LINK_H_
#define _LINK_H_

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
}stack;

void Initlist(stack*);
int Isempty(stack*);
Node* Gettop(stack*,int);
void Push(stack*,Datatype);
void Pop(stack*,Datatype);
Datatype Delete(stack*,int);
void Display(stack*);
	
#endif
