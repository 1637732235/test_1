//一球从M米高度自由下落，每次落地后返回原高度的一半，再落下。 它在第N次落地时反弹多高？共经过多少米？ 保留两位小数
//输入格式
//M N
//输出格式
//它在第N次落地时反弹多高？共经过多少米？ 保留两位小数，空格隔开，放在一行
//样例输入
//1000 5
//样例输出
//31.25 2875.00
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int M = 0, N = 0;

	scanf("%d%d", &M, &N);
	double m = M, height = 0, distance = 0;
	for (int i = 1; i <= N; i++)
	{
		height = m / 2;
		distance = distance + m + height;
		m = height;
	}
	distance = distance - height;
	printf("%.2f %.2f\n", height, distance);
	return 0;
}