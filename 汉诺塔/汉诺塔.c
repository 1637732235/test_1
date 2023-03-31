#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void hanoi(int n, char 一, char 二, char 三)
{
	if (n == 1)
	{
		printf("%c->%c\n", 一, 三);
	}
	else {
		hanoi(n - 1, 一, 三, 二);
		printf("%c->%c\n", 一, 三);
		hanoi(n - 1, 二, 一, 三);
	}
}
int main()
{int a;
scanf("%d", &a);
		 hanoi(a, 'A', 'B', 'C');
		return 0;
	}
