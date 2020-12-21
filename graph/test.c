#include "graph.h"
int main()  
{  
   AdjMatrix* G= (AdjMatrix*)malloc(sizeof(AdjMatrix));  
   CreateGraph(G);  
   DispGraph(G); 
}

