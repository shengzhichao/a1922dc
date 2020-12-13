#include "tree.h"
//主函数
int main(int argc,const char *argv[])
{
    BiTNode *T;
    int depth,leafCount = 0;
    printf("请输入第一个节点的值，-1表示没有叶节点：\n");
    CreateBiTree(&T);

    printf("先序遍历二叉树：");
    PreOrderBiTree(T);
    printf("\n");

    printf("中序遍历二叉树：");
    MiddleOrderBiTree(T);
    printf("\n");

    printf("后续遍历二叉树：");
    PostOrderBiTree(T);
    printf("\n");

    depth = TreeDeep(T);
    printf("树的深度为：%d\n",depth);
    
    leafCount = LeafCount(T);
    printf("叶子节点个数:%d\n",leafCount);

    return 0;
}
