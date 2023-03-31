#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int money = 0;
	int empty = 0;
	int all= 0;
	scanf("%d", &money);
	all = money;
	empty = money;
	while (empty >= 2)
	{
		all = all + empty / 2;
			empty = empty / 2+empty%2;

	}printf("%d\n", all);

	//int $;
	//int all=0;
	//int a=0; int b=0;
	//scanf("%d", &$);//21
	//for (a = $,b=$,all=$; a >= 2; b = b / 2)
	//{
	//	a = a / 2;
	//	b = a + b % 2;
	//	all = all + a;
	//}
	//printf("%d\n", all+1);
	return 0;
}