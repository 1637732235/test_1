//给出一个不多于5位的整数，要求 1、求出它是几位数 2、分别输出每一位数字 3、按逆序输出各位数字，例如原数为321, 应输出123
//输入格式
//一个不大于5位的数字
//输出格式
//三行 第一行 位数 第二行 用空格分开的每个数字，注意最后一个数字后没有空格 第三行 按逆序输出这个数
//样例输入
//12345
//样例输出
//5
//1 2 3 4 5
//54321
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char arr[6];
	int a = 0, b;
	scanf("%s",arr);
	printf("%d\n",strlen(arr));
	while (a < (strlen(arr)-1) && strlen(arr) <=5)//注意数组下标0-4
	{
		printf("%c ",arr[a]);
		a++;
	}printf("%c\n", arr[a]);
	while (a >= 0 && strlen(arr) <= 5)
	{
		printf("%c", arr[a]);
		a--;
	}
	return 0;
}