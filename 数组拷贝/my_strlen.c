#include <stdio.h>
#include <assert.h>

//char* my_strcpy(char* q, const char* w)
//{
//	int count;
//	assert(*q != 0);
//	assert(*w != 0);
//	while (*w != '\0')
//	{
//		count++;
//		q++= w++;
//	}return count ע��ȫ����
//}
//
//int main����
//{
//	char a[] = "qwerty";
//	char b[] = "abc";
//	my_strcpy(a[], b[]);
//
//}

int my_strlen(const char *str)
{
	int count=0;
	assert(str != NULL);//��ָ֤�����Ч��
	while (*str != '\0')
	{
		count++;
		str++;
	}return count;
}

int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}