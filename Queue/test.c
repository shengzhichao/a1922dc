#include "queue.h"

int main()
{
		Linkqueue *q = (Linkqueue*)malloc(sizeof(Linkqueue));
		initqueue(q);
		//printf("%d\n",b);
		//push_head(q,1);
		push_back(q,2);
		push_back(q,3);
	 	push_head(q,1);
		push_back(q,4);
    display(q);

		printf("队头元素为%d\n",front(q));
		printf("队尾元素为%d\n",back(q));
    
		printf("求队列长度：%d\n",Size(q));
    printf("此时进行了头出列和尾出列\n");
		pop_head(q);
		pop_back(q);
		printf("队头元素为%d\n",front(q));
		printf("队尾元素为%d\n",back(q));
    
		printf("判断是否为空（1为空，0为不空）：%d\n",empty(q));
		printf("求队列长度：%d\n",Size(q));
    display(q);
		
}
