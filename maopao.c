#include<stdio.h>
void  maopao(int arr[], int sz)
{
	int a = 0;
	for (a = 0; a < sz - 1; a++)
	{
		int b = 0;
		for (b = 0; b < sz - 1 - a; b++)
		{
			if (arr[b] > arr[b + 1])
			{
				int c = arr[b];
				arr[b] = arr[b + 1];
				arr[b + 1] = c;

			}
		}
	}
	
}


int main()



{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
      maopao(arr, sz);
	
	return 0;
}