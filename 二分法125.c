#include<stdio.h>
int xiao_yi(int arr[], int A, int sz)
{
	int left = 0;
	int right = sz - 1;
	
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > A)
		{
			right = mid - 1;
		}
		else if (arr[mid] < A)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	int A = 8;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = xiao_yi(arr, A, sz);
	if ( -1 == ret)
	{
		printf("找不到");
	}
	else
	{
		printf("找到了，下标为：%d", ret);
	}
	return 0;
}