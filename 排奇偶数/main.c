#include <stdio.h>
//#include <assert.h>//奇数在前偶数在后
//1 3 4 6 5 2 7  
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}printf("\n");
}
void move(int arr[], int sz)
{
	int l = 0;
	int r = sz - 1;
	while (l < r)
	{
		while ((l < r) && (arr[l] % 2 != 0))
		{
			l++;
		}
		while ((l < r) && (arr[r] % 2 != 1))
		{
			r--;
		}
		if (l < r)
		{
			int tmp = arr[l];
			arr[l] = arr[r];
			arr[r] = tmp;
		}
	}
}
int main() 
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
		int sz = sizeof(arr) / sizeof(arr[0]);
		move(arr, sz);
		print(arr, sz);
		return 0;
}