#pragma warning (disable : 4996)
#include <stdio.h>
#include <math.h>
int input(void);
int primeNumber(int);

int main()
{
	int num, count = 0;
	num = input();
	printf("1 ~ %d������ �Ҽ� ���� ������ �����ϴ�.\n", num);
	for (int i = 2; i < num; i++)
	{
		if (primeNumber(i) == 1) {
			printf("%-5d", i);
			count++;
			if (count % 5 == 0) printf("\n");
		}
	}
	printf("\n1 ~ %d������ �� �Ҽ��� %d�� �Դϴ�.\n", num, count);
}

int input(void)
{
	int n;
	printf("*������ �ϳ��� �Է��Ͻÿ� : ");
	while (scanf("%d", &n) != 1) {
		while (getchar() != '\n');
		printf("�ٽ� �Է��ϼ��� : ");
	}
	return n;
}

int primeNumber(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) return 0;
	}
	return 1;
}