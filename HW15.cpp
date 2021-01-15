#pragma warning(disable : 4996)
#include <stdio.h>
double info_input(void);
double bmi_cal(double, double);
void print_info(double);
int main()
{
	double bmi = info_input();
	print_info(bmi);
	return 0;
}

double info_input(void)
{
	double weight, height;
	printf("�����Ը� �Է��ϼ���(kg) : ");
	scanf("%lf", &weight);
	printf("Ű�� �Է��ϼ���(m) : ");
	scanf("%lf", &height);
	return bmi_cal(weight, height);
}

double bmi_cal(double weight, double height)
{
	return weight / (height * height);
}

void print_info(double bmi)
{
	if (bmi < 18.5)
		printf("����� BMI�� %.1lf���� ��ü�� �Դϴ�.\n", bmi);
	else if (bmi < 25.0)
		printf("����� BMI�� %.1lf���� ����ü�� �Դϴ�.\n", bmi);
	else if (bmi < 30.0)
		printf("����� BMI�� %.1lf���� ��ü�� �Դϴ�.\n", bmi);
	else if (bmi < 40.0)
		printf("����� BMI�� %.1lf���� �� �Դϴ�.\n", bmi);
	else
		printf("����� BMI�� %.1lf���� ���� �Դϴ�.\n", bmi);
}