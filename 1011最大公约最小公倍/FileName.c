//����5 7
//���1 35 շת�����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, tem, c, d;
	scanf("%d%d", &a, &b);
	c = a; d = b;
	while (b != 0)
	{
		//tem = b;
		tem = a % b;//�����
		a = b;
		b = tem;
	}
	printf("%d %d\n", a,c*d/a);
}