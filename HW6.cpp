#pragma warning(disable : 4996)
#include <stdio.h>
double inputF(void);
void printC(double c);

int main()
{
	double f = inputF();
	printC(((double)5 / 9) * (f - 32));
	return 0;
}

double inputF(void)
{
	double f;
	printf("ȭ�� �µ��� �Է��ϼ��� : ");
	scanf("%lf", &f);
	return f;
}

void printC(double c)
{
	printf("���� �µ��� %.1lf�� �Դϴ�.\n", c);
}