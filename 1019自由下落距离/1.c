//һ���M�׸߶��������䣬ÿ����غ󷵻�ԭ�߶ȵ�һ�룬�����¡� ���ڵ�N�����ʱ������ߣ������������ף� ������λС��
//�����ʽ
//M N
//�����ʽ
//���ڵ�N�����ʱ������ߣ������������ף� ������λС�����ո����������һ��
//��������
//1000 5
//�������
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