//阶乘求和sn=1！+2！+3！---
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long int fun(int a)//第几个阶乘  注意int/longint
{
	if (a > 1)
		return a * (fun(a - 1));
	return 1;
}
int main()
{
	long int n, sn = 1;
	scanf("%d", &n);
	while (n > 1&&n<=20)
	{
		sn = sn + fun(n);
		n--;
	}
	printf("%ld\n", sn);
}
