#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void hanoi(int n, char һ, char ��, char ��)
{
	if (n == 1)
	{
		printf("%c->%c\n", һ, ��);
	}
	else {
		hanoi(n - 1, һ, ��, ��);
		printf("%c->%c\n", һ, ��);
		hanoi(n - 1, ��, һ, ��);
	}
}
int main()
{int a;
scanf("%d", &a);
		 hanoi(a, 'A', 'B', 'C');
		return 0;
	}
