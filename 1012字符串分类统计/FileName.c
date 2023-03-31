//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int i, letter=0, number=0, space=0, other=0;
	char str[150];
	gets(str);//gets能读空格
	for (i = 0; i < strlen(str); i++)//i!='\n'不行？？
	{
		if ('a'<=str[i] && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
			letter++;
		else if (str[i] >= '0' && str[i] <= '9')//同理str[i]>=65&&str[i]<=73 !!错误写法'0' <= str[i] <= '9'
			number++;
		else if (str[i] ==' ')//注意==和=
			space++;
		else other++;
	}
	printf("%d %d %d %d\n", letter, number, space, other);//注意OJ和自己练习输出的结果
	return 0;
}