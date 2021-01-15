#pragma warning(disable : 4996)
#include <stdio.h>
int transNumber(int);
int inputUInt(int, const char*);
void print(int);

int main()
{
	int p1, p2, n, i, k, N = 0, count = 0;
	p1 = inputUInt(1, "���� ��(P1) : ");
	p2 = inputUInt(1, "�� ��(P2) : ");
	n = inputUInt(2, "������(N) : ");
	printf("�������� %d�� ���� ���\n", n);
	for (i = p1; i < p2; i++)
	{
		N = 0;
		k = transNumber(i);
		N++;
		while (k > 10)
		{
			k = transNumber(k);
			N++;
		}
		if (N == n)
		{
			printf("%d\n", i);
			count++;
		}
	}
	print(count);
	return 0;
}

int transNumber(int num)
{
	if (num < 100) // 2�ڸ�
	{
		return (num / 10) * (num % 10);
	}
	else if (num < 1000) // 3�ڸ�
	{
		return (num / 100) * ((num % 100) / 10) * (num % 100 % 10);
	}
	else if (num < 10000) // 4�ڸ�
	{
		return (num / 1000) * ((num % 1000) / 100) * (((num % 1000) % 100) / 10) * (((num % 1000) % 100) % 10);
	}
	else
		return 0;
}

int inputUInt(int a, const char* msg)
{
	int n;
	printf(msg);
	switch (a) {
	case 1:
		while (1) {
			if (scanf("%d", &n) == 1)
				if (n >= 100 && n <= 10000)
					break;
			while (getchar() != '\n');
			printf("�ٽ� �Է��ϼ��� : ");
		}
		break;
	case 2:
		while (1) {
			if (scanf("%d", &n) == 1)
				if(n >= 1 && n <= 10)
				break;
			while (getchar() != '\n');
			printf("�ٽ� �Է��ϼ��� : ");
		}
	}
	return n;
}

void print(int count)
{
	printf("�� ���� : % d��", count);
}