//样例输入
//1000
//样例输出
//6 its factors are 1 2 3
//28 its factors are 1 2 4 7 14
//496 its factors are 1 2 4 8 16 31 62 124 248
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void fun(int N)
{
	int a, b, sum, arr[1001];
	//scanf("%d", &N);
	//for (int i = 1; i < N; i++)//遍历1-1000
	for (a = 1, b = 0, sum = 0; a < N; a++)//遍历1-256 因子
	{
		if (N % a == 0)//如果是因数
		{
			sum += a;
			arr[b] = a;
			b++;
		}
	}
	if (sum == N)
	{
		printf("%d its factors are ", N);
		for (int i = 0, *p = &arr[0]; i < b; i++)
			printf("%d ", *(p + i));//printf("%d ", arr[i]);
		printf("\n");
	}
}
int main()
{
	int n, arr[1001], sum;
	scanf("%d", &n);
	for (int i = 1, sum = 0; i < n; i++)//遍历1-1000
	{
		fun(i);
	}
}