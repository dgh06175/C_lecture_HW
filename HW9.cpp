#pragma warning(disable : 4996)
#include <stdio.h>
int int_input(void);

int main()
{
	int number;
	number = int_input();
	printf("�Էµ� ���� 8������ %#o �Դϴ�.\n", number);
	printf("�Էµ� ���� 16������ %#x �Դϴ�.\n", number);
	return 0;
}

int int_input(void)
{
	int x;
	printf("�������� �Է��ϼ��� : ");
	scanf("%d", &x);
	return x;
}