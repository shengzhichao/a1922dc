#include "linkstack.h"

int main()
{
		Linkstack *q = (Linkstack*)malloc(sizeof(Linkstack));
		initlinkstack(q);
		//printf("%d\n",b);
		Push(q,2);
		Push(q,2);
		Push(q,3);
    display(q);
//printf("使用Pop函数之后:\n");
printf("%d\n",empty(q));
printf("size:%d\n",Size(q));
    
		Pop(q);
    
    display(q);
		
}
