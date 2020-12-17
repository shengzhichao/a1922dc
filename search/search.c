#include "search.h"
/*顺序查找*/
int Sequential_Search(int* array, int len, int key)
{
	if (!array || len <= 0)
		return -1;
	int i;
	for (i = 0; i < len; ++i)
		if (array[i] == key)
			return i;
	return -1;
}


/*二分查找, 必须是有序的, 循环实现*/
int Binary_Search1(int* array, int len, int key)
{
	if (!array || len <= 0)
		return -1;

	int l = 0;
	int h = len - 1;
	while (l <= h)
	{
		int m = (l + h) / 2;
		if (array[m] < key)
		{
			l = m + 1;
		}
		else if (array[m] > key)
		{
			h = m - 1;
		}
		else
		{
			return m;
		}
	}

	return -1;
}

/*二分查找, 必须是有序的, 递归实现*/
int Binary_Search2(int* array, int l, int h, int key)
{
	if (!array || h - l < 0)
		return -1;

	int m = (l + h) / 2;
	if (array[m] == key)
	{
		return m;
	}
	else if (array[m] < key)
	{
		return Binary_Search2(array, m + 1, h, key);
	}
	else if (array[m] > key)
	{
		return Binary_Search2(array, l, m - 1, key);
	}
}

