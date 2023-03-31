#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int QQ(int a)
{
	if(a>1)
	{return a*QQ(a-1);}
	else 
	{return 1;}
}
int main()
{
	int n;
	scanf("%d", &n);
	QQ(n);
	printf("%d\n",QQ(n));
	return 0;
}
