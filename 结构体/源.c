#include <stdio.h>
#include <stdlib.h>

typedef struct stu
{
	char ch[10];
	char c;
	int i;
}stu;
void print(stu q)
{
	printf("%s %c %d\n", q.ch, q.c, q.i);
}
void print1(struct stu* q)
{
	printf("%s %c %d %p\n", q->ch, q->c, q->i, q);
}
int main()
{
	stu a = { "fuck",'q',123 };
	print(a);
	print1(&a);
	return 0;
}
