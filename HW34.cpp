#pragma warning(disable : 4996)
#include <stdio.h>
void input(int*, int*);
int calcul(int, int);
void print(int, int, int);

int main()
{
	int code, use;
	input(&code, &use);
	print(code, use, calcul(code, use));
	return 0;
}

void input(int *pcode, int *puse)
{
	printf("* ����� �ڵ带 �Է��Ͻÿ�(1:������/2:�����/3:������) : ");
	while (scanf("%d", pcode) != 1) {
		while (getchar() != '\n');
		printf("�ٽ� �Է��ϼ��� : ");
	}
	printf("* ��뷮�� �Է��Ͻÿ�(ton����) : ");
	while (scanf("%d", puse) != 1) {
		while (getchar() != '\n');
		printf("�ٽ� �Է��ϼ��� : ");
	}
}

int calcul(int code, int use)
{
	int per_ton = 0;
	switch (code)
	{
	case 1: per_ton = 50; break;
	case 2: per_ton = 45; break;
	case 3: per_ton = 30; break;
	default: printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}
	return (double)per_ton * (double)use * 1.05;
}

void print(int code, int use, int charge)
{
	char code_string[3][10] = { "������", "�����", "������" };
	printf("\n# ������ڵ� : %d(%s)\n", code, code_string[code-1]);
	printf("# ��뷮 : %d ton\n", use);
	printf("# �Ѽ������ : %d��\n", charge);
}