#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int n, m;
	printf("# ��� ���μ��� �Է��Ͻÿ� : ");
	while (scanf("%d", &n)) {
		if (n <= 30 && n > 0)
		{
			m = 2 * n + 3;
			for (int i = 1; i <= n; i++)
			{
				for (int j = 0; j < i; j++)
				{
					printf("*");
				}
				for (int j = 0; j < m - 2 * i; j++)
				{
					printf(" ");
				}
				for (int j = 0; j < i; j++)
				{
					printf("*");
				}
				printf("\n");
			}
			printf("\n# ��� ���μ��� �Է��Ͻÿ� : ");
		}
		else printf("�ٽ� �Է��Ͻÿ� : ");
	}
}