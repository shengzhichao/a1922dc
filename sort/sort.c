#include "sort.h"
void bubblesort(int arr[],int length)
{
	for(int i =0;i<length-1;i++)
	{
		int x = 1;                                 //设置判断文件，如果没有数组元素都没有进行交换说明顺序原本就排好了
		for(int j = 0;j<length-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{	int temp;
				temp = arr[j];
				arr[j] = arr[j+1];
			       arr[j+1] = temp;
			       x = 0;
			}

		}

	}
	
}
void selectsort(int arr[],int length)                               //选择排序函数
{
	int min = 0;
	for(int i = 0;i<length;i++)     //在无序序列后寻找最小的数，放在有序序列之后，有序序列则是已经按从大到小排好的数
	{
		int temp;
		for(int j =min;j<length;j++)            //在
		{
			if(arr[j] <arr[min])
				min = j;	
		}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = arr[i];
		min = min + 1;
	}
}


int changeseat(int arr[],int first,int end)//将小于支点的其他数移到支点之前，大于支点的数移到支点之后
{
	int i = first;
	int j = end;
	int temp;
	while(i<j)
	{
		while(i<j && arr[i]<arr[j])
		{j--;}

		if(i<j)
		{temp = arr[i];
		arr[i] = arr[j];                         //交换arr[i]和arr[j]的s位置
		arr[j] = temp;
		i++;
		}
		while(i<j && arr[i]<arr[j])
		{i++;}

		if(i<j)
		{temp = arr[i];
		arr[i] = arr[j];                         //交换arr[i]和arr[j]的s位置
		arr[j] = temp;
		j--;
	       }
	}
	return i;
}
void quicksort(int arr[],int first,int end)
{
	int pos;
	pos = changeseat(arr,first,end);     //调用递归，分别对第一次支点的左右进行相同的操作，第二次，第三次......
	quicksort(arr,first,pos-1);	
	quicksort(arr,pos+1,end);
}

void insertsort(int arr[])
{
	for(int i = 2;;i++)
	{
		int j = i-1;
		arr[0] = arr[i];
		while(arr[0]<arr[j])
		{
			arr[j+1] = arr[j];
			j--;

		}
		arr[j+1] = arr[0];

	}
}

void display(int arr[],int length)
{
	for(int i = 1;i<length+1;i++)
	{
		printf("第%d个数是%d\n",i,arr[i-1]);
	}
}








