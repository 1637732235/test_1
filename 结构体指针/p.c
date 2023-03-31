#include <stdio.h>
struct Q {
	int a; 
	int b;
};
int main()
{
	struct Q q, *v = &q;
	q.a = 66;
	q.b = 99,
	printf("%d\n", v->b);
	printf("%d\n", (*v).a);
	return 0;

}