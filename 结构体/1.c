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
	AAAAA  a= { 'f',1.68,22,"我爱你love you",{"女生",2001,ch},};
	printf("性别是%s\n%d年出生\n地址是%p\n性别是%c\n年龄是%d岁\n身高是%3.2f米\n%s\n", a.b.arr1, a.b.bir, a.b.p, a.gender, a.age, a.weight, a.arr);
	//printf("性别是%s %d年出生\n", a.b.arr1, a.b.bir);
	return 0;
}