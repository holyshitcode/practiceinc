#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

typedef struct point Point;

typedef struct person
{
	char name[20];
	char phoneNum[20];
	int age;
} Person;

int main(void)
{
	Point pos = { 10,20 };
	Person man = { "���ؿ�", "010-5217-4898", 26 };
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d\n", man.name, man.phoneNum, man.age);
	return 0;
}