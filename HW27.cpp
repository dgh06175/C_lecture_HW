#pragma warning(disable : 4996)
#include <stdio.h>
int input(const char *);

int main()
{
	int count = 0, g;
	while (count < 10)
	{
		g = input("# ����� ���Ը� �Է��ϼ���(���� : g) : ");
		if (g >= 150 && g <= 500)
			printf("���� �ް��� �� : %d\n", ++count);
		else if (g < 150)
			printf("���߸��� ������ �峭���� ���ÿ�~ ^^\n");
		else
			printf("Ÿ���� ������ �峭���� ���ÿ�~ ^^\n");
	}
	printf("�ް� ǥ���� �������ϴ�.\n");
	return 0;
}

int input(const char* msg)
{
	int g;
	printf(msg);
	while (scanf("%d", &g) != 1) {
		while (getchar() != '\n');
		printf("�ٽ� �Է��ϼ��� : ");
	}
	return g;
}