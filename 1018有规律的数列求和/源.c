//��һ�������У� 2/1 3/2 5/3 8/5 13/8 21/13...... ���������е�ǰN��֮�ͣ�������λС����
//�����ʽ
//N
//�����ʽ
//����ǰN���
//��������
//10
//�������
//16.48
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n,  i;
	double a, b, sum;
	scanf("%d", &n);
	for (a = 2.0, b = 1.0, sum = 2.0, i = 1; i < n; i++)
	{
		a = a + b;//3
		b=a-b;//2
		sum += a / b;//=3/2+2/1
	}
	printf("%.2lf", sum);
}