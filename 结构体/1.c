#include <stdio.h>


struct BBB
{
	char arr1[20];
	short bir;
	char* p;
};

typedef struct AAA
{
	char gender;
	double weight;
	int age;
	char arr[20];
	struct BBB b;
	//struct node* next;
}AAAAA; //q=struct node
int main()
{
	char ch[20] = "songjiaming~~~";
	AAAAA  a= { 'f',1.68,22,"�Ұ���love you",{"Ů��",2001,ch},};
	printf("�Ա���%s\n%d�����\n��ַ��%p\n�Ա���%c\n������%d��\n�����%3.2f��\n%s\n", a.b.arr1, a.b.bir, a.b.p, a.gender, a.age, a.weight, a.arr);
	//printf("�Ա���%s %d�����\n", a.b.arr1, a.b.bir);
	return 0;
}