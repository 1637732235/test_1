//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int i, letter=0, number=0, space=0, other=0;
	char str[150];
	gets(str);//gets�ܶ��ո�
	for (i = 0; i < strlen(str); i++)//i!='\n'���У���
	{
		if ('a'<=str[i] && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
			letter++;
		else if (str[i] >= '0' && str[i] <= '9')//ͬ��str[i]>=65&&str[i]<=73 !!����д��'0' <= str[i] <= '9'
			number++;
		else if (str[i] ==' ')//ע��==��=
			space++;
		else other++;
	}
	printf("%d %d %d %d\n", letter, number, space, other);//ע��OJ���Լ���ϰ����Ľ��
	return 0;
}