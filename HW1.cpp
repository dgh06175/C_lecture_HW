#include <stdio.h>
void printAge(int age);
void printHeight(double height);

int main()
{
	char name[20] = "�̻���";
	int age = 500;
	double height = 170.8;

	printf("���� : %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}

void printAge(int age)
{
	printf("���� : %d\n", age);
	return;
}

void printHeight(double height)
{
	printf("Ű : %.1lf\n", height);
	return;
}
