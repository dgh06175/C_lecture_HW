#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int money, m50000, m10000, m5000, m1000, m500, m100, m50, m10, charge;
	printf("���� �׼��� �Է��Ͻÿ� : ");
	scanf("%d", &money);
	m50000 = money / 50000;
	charge = money - m50000 * 50000;

	m10000 = charge / 10000;
	charge = charge - m10000 * 10000;

	m5000 = charge / 5000;
	charge = charge - m5000 * 5000;

	m1000 = charge / 1000;
	charge = charge - m1000 * 1000;

	m500 = charge / 500;
	charge = charge - m500 * 500;

	m100 = charge / 100;
	charge = charge - m100 * 100;

	m50 = charge / 50;
	charge = charge - m50 * 50;

	m10 = charge / 10;
	charge = charge - m10 * 10;
	
	printf("50000���� => %d��\n", m50000);
	printf("10000���� => %d��\n", m10000);
	printf("5000���� => %d��\n", m5000);
	printf("1000���� => %d��\n", m1000);
	printf("500���� => %d��\n", m500);
	printf("100���� => %d��\n", m100);
	printf("50���� => %d��\n", m50);
	printf("10���� => %d��\n", m10);

	return 0;
}