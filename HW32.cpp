#pragma warning(disable : 4996)
#include <stdio.h>
int inputUint(const char*);
double inputDouble(const char*);
int ipow(int, int);
double fpow(double, int);

int main()
{
	int Inum, IN, FN, I;
	double Fnum, F;
	Inum = inputUint("* ���� ���� ���� �Է� �Ͻÿ� : ");
	IN = inputUint("* ���� ���� �Է� �Ͻÿ� : ");
	I = ipow(Inum, IN);
	printf("%d�� %d���� %d�Դϴ�.\n\n", Inum, IN, I);

	Fnum = inputDouble("* ���� �Ǽ� ���� �Է� �Ͻÿ� : ");
	FN = inputUint("* ���� ���� �Է� �Ͻÿ� : ");
	F = fpow(Fnum, FN);
	printf("%.2lf�� %d���� %.3lf�Դϴ�.\n", Fnum, FN, F);
	return 0;
}

int inputUint(const char* msg)
{
	int n;
	printf(msg);
	while (1) {
		scanf("%d", &n);
		while (getchar() != '\n');
		if (n >= 0)
			break;
		else
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}
	return n;
}

double inputDouble(const char* msg)
{
	double n;
	printf(msg);
	while (1) {
		scanf("%lf", &n);
		while (getchar() != '\n');
		if (n >= 0.0)
			break;
		else
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}
	return n;
}

int ipow(int num, int N)
{
	int a = 1;
	for (int i = 0; i < N; i++)
		a = a * num;
	return a;
}

double fpow(double num, int N)
{
	double a = 1;
	for (int i = 0; i < N; i++)
		a *= num;
	return a;
}
