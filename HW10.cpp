#pragma warning(disable : 4996)
#include <stdio.h>

int main()
{
	int a, b;
	printf("�ΰ��� ������ �Է��Ͻÿ� : ");
	scanf("%d %d", &a, &b);
	printf("%d+%d = %d\n", a, b, a + b);
	printf("%d-%d = %d\n", a, b, a - b);
	printf("%d*%d = %d\n", a, b, a * b);
	printf("%d/%d = %.2lf\n", a, b, (double)a / b);
	return 0;
}