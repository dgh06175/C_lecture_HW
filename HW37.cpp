#pragma warning(disable : 4996)
#include <stdio.h>

int main()
{
	int n, gold = 0, day = 0, count;
	printf("* ����� �ٹ��ϼ��� �Է��Ͻÿ� : ");
	while (scanf("%d", &n) != 1 || n<=0) {
		while (getchar() != '\n');
		printf("�ٽ� �Է��ϼ��� : ");
	}
	for (int i = 1; i <= n; i++)
	{
		count = 1;
		while (count <= i)
		{
			if (day == n)
				break;
			gold += i;
			count++;
			day++;
		}
		if (day == n)
			break;
	}
	printf("  �ٹ��� : %d�� / �� ��ȭ �� : %d��.\n", n, gold);
	return 0;
}