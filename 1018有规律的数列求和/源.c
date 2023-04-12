//有一分数序列： 2/1 3/2 5/3 8/5 13/8 21/13...... 求出这个数列的前N项之和，保留两位小数。
//输入格式
//N
//输出格式
//数列前N项和
//样例输入
//10
//样例输出
//16.48
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n,  i;
	double a, b, sum;
	scanf("%d", &n);
	for (a = 2.0, b = 1.0, sum = 2.0, i = 1; i < n; i++)
	{
		a = a + b;//3
		b=a-b;//2
		sum += a / b;//=3/2+2/1
	}
	printf("%.2lf", sum);
}