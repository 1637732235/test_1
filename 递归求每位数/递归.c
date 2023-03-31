#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int (mystrlen(char* str))
{
	if (*str != '\0')
	
		return 1 + mystrlen(str + 1);
	else 
		return 0;
	}
/*int count=0;
	while (*str!= 0)
	{
		count++;
		str++;
	}
	return count;*/

int main()
{
	char arr[] = "holy shit!";
	int len = mystrlen(arr);
		printf("%d\n",len);
		return 0;
}

//void QQ(int a)
//{
//	if (a > 9)
//	{
//		QQ(a/10);
//	}
//	printf("%d ", a%10);
//}
//int main()
//{
//	unsigned int q;
//	scanf("%d",&q);
//	QQ(q);
//	//return 0;
//}
