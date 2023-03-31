//2+22+222+2222---
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, sum=0,sn=0;
	scanf("%d", &a);
	for (sum = 0; a >= 1; a--)
	{
		sum = sum * 10 + 2;
		sn += sum;
	} //第二位等于前一位*10+2
		printf("%d\n", sn);
}





//int fun(int q)///最后一位数   自己写的有点麻烦，不过程序正确
//{
//	int i=2,total=2;
//	while (q > 1)
//	{
//		i = i* 10;
//		total = total + i;
//		q--;
//	}
//	return total;
//}
//int main()
//{
//	int a, b;
//	scanf("%d", &a);
//	for (b = 0; a>=1; a--)
//	b = b + fun(a);//递归2   2+2*10   2+2*10+2*10*10	 2+2*10+2*10*10+2*10*10*10
//	printf("%d\n",b);
//}