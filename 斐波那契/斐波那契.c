#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int count;
int fib(int q)
{
	int a = 1; int b = 1; int c = 1;
	while (q > 2)
	{
		c = a + b;
		a = b;
		b = c;
		q--;
	}
	return c;
	/*if (a == 3) count++;
	if (2 >= a)
	{
		return("%d\n", 1);
	}
	else {
		return fib(a - 1) + fib(a - 2);
	}*/
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", fib(n));
	//printf("%d\n", count);
	return 0;
}