//求以下三数的和, 保留2位小数 1~a之和 1~b的平方和 1~c的倒数和
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
double a, b, c, i, A=0, B=0, C=0;
scanf("%lf%lf%lf", &a, &b, &c);
for (i = 1; i <= a; i++)              
    A += i;
for (i = 1; i <= b; i++)
	B += i * i;
for (i = 1; i <= c; i++)
    C += 1.0 / i;
	printf("%.2lf\n", A+B+C);
	return 0;
}