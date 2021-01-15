#pragma warning(disable : 4996)
#include <stdio.h>
int input(const char*);
double income_cal(int);
double tax_cal(double);
void print(double, double);

int main()
{
	int hour;
	double income, tax;
	hour = input("* 1���ϰ��� �ٹ��ð��� �Է��Ͻÿ� : ");
	income = income_cal(hour);
	tax = (double)tax_cal(income);
	print(income, tax);
	return 0;
}

int input(const char* msg)
{
	int hour;
	printf(msg);
	scanf("%d", &hour);
	return hour;
}

double income_cal(int hour)
{
	if (hour <= 40)
		return (double)hour * 3000.0;
	else
		return 40.0 * 3000.0 + (double)(hour - 40) * 3000.0 * 1.5;
}

double tax_cal(double income)
{
	if (income < 100000.0)
		return income * 0.15;
	else
		return 100000.0 * 0.15 + (income - 100000.0) * 0.25;
}

void print(double income, double tax)
{
	printf("# �Ѽ��� : %6.0lf��\n# ��  �� : %6.0lf��\n# �Ǽ��� : %6.0lf��\n", income, tax, (double)income - tax);
}