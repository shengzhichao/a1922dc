#ifndef _GRAPH_
#define _GRAPH_

#include <stdio.h>  
#include <stdlib.h>  
#define  MaxVertices 100
typedef struct node{   //边表 
   int adjvex;
   struct node* next;  
}EdgeNode;  
  
typedef struct{     //顶点表  
   int vertex;  
   EdgeNode* edgenext;  
}VertexNode;  
  
typedef VertexNode AdjList[MaxVertices];  
  
typedef struct{   
    AdjList adjlist;  
    int n,e;  
}AdjMatrix;  


void CreateGraph(AdjMatrix* G); 

void DispGraph(AdjMatrix *G);



#endif
