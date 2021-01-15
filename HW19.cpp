#pragma warning(disable : 4996)
#include <stdio.h>
int input(const char *);
int yearCheck(int);
void print(int, int);

int main()
{
	int year = input("�⵵�� �Է��Ͻÿ� : ");
	print(yearCheck(year), year);
}

int input(const char* msg)
{
	int year;
	printf(msg);
	scanf("%d", &year);
	return year;
}

int yearCheck(int year)
{
	if (year % 4 == 0)
		if (year % 100 == 0)
			if (year % 400 == 0)
				return 1;
			else
				return 0;
		else
			return 1;
	else
		return 0;
}

void print(int x, int year)
{
	if (x == 0)
		printf("%d���� ���(Common year)�Դϴ�.\n", year);
	else
		printf("%d���� ����(Leap year)�Դϴ�.\n", year);
}