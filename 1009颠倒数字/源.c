//����һ��������5λ��������Ҫ�� 1��������Ǽ�λ�� 2���ֱ����ÿһλ���� 3�������������λ���֣�����ԭ��Ϊ321, Ӧ���123
//�����ʽ
//һ��������5λ������
//�����ʽ
//���� ��һ�� λ�� �ڶ��� �ÿո�ֿ���ÿ�����֣�ע�����һ�����ֺ�û�пո� ������ ��������������
//��������
//12345
//�������
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
	while (a < (strlen(arr)-1) && strlen(arr) <=5)//ע�������±�0-4
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