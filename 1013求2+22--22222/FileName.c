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
	} //�ڶ�λ����ǰһλ*10+2
		printf("%d\n", sn);
}





//int fun(int q)///���һλ��   �Լ�д���е��鷳������������ȷ
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
//	b = b + fun(a);//�ݹ�2   2+2*10   2+2*10+2*10*10	 2+2*10+2*10*10+2*10*10*10
//	printf("%d\n",b);
//}