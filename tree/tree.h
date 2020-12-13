#ifndef _TREE_
#define _TREE_
#include <stdio.h>
#include <stdlib.h>

typedef struct BTNode{
    int data;
    struct BTNode *lChild;
    struct BTNode *rChild;
}BiTNode;


void CreateBiTree(BiTNode **T);
void PreOrderBiTree(BiTNode *T);
void MiddleOrderBiTree(BiTNode *T);

void PostOrderBiTree(BiTNode *T);

int TreeDeep(BiTNode *T);

int LeafCount(BiTNode *T);




#endif
